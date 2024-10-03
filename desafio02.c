#include <stdio.h>
#include <locale.h>
/*2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, 
ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

IMPORTANTE: Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;*/
int main()
{
	setlocale(LC_ALL, "");
    int i, numeroA = 0, numeroB = 1, aux, seqFibo[100], meuNumero = 0, numeroEncontrado = 0;
    printf("Informe um n�mero para verificar se ele faz parte da sequ�ncia de Fibonacci:");
    scanf("%d", &meuNumero);
    for (i = 0; i < 20; i++)
    {
        seqFibo[i] = 0;
    }
    
    for (i = 0; i < 20; i++)
    {
        seqFibo[i] = numeroA;
        if(meuNumero == seqFibo[i]){
        	printf("[%d] ", seqFibo[i]);
		} else {
			printf("%d ", seqFibo[i]);
		}
        aux = numeroA + numeroB;
        numeroA = numeroB;
        numeroB = aux;
    }
    
    for (i = 0; i < 20; i++)
    {
        if (meuNumero == seqFibo[i]){
        	numeroEncontrado = 1;
        	break;
		}
    }
    	if (numeroEncontrado){
        	printf("\nO n�mero %d pertence a sequ�ncia de Fibonacci!\n", meuNumero);
    	} else {
    		printf("\nO n�mero %d n�o pertence a sequ�ncia de Fibonacci!\n", meuNumero);
		}
    return 0;
}
