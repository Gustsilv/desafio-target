#include <stdio.h>
#include <locale.h>
/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/
int main()
{
	setlocale(LC_ALL, "");
    int i, numeroA = 0, numeroB = 1, aux, seqFibo[100], meuNumero = 0, numeroEncontrado = 0;
    printf("Informe um número para verificar se ele faz parte da sequência de Fibonacci:");
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
        	printf("\nO número %d pertence a sequência de Fibonacci!\n", meuNumero);
    	} else {
    		printf("\nO número %d não pertence a sequência de Fibonacci!\n", meuNumero);
		}
    return 0;
}
