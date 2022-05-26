#include  <stdio.h>
#include <stdlib.h>

int main (){

    int i; // contador
    int n; //guarda o numero dado
    int soma; // guarda as somas parciais

    printf("\n\tCalculo da soma dos primeiros n inteiros positivos\n");

    //inicializacao
    printf("\nDigite o valor de n:  ");
    scanf("%d",&n);
    soma = 0;
    i=1;

    //calculo soma
    while (i <= n){
        soma = soma + i;
        i = i + 1;
    }
        //escreve a resposta
        printf("\nA soma dos %d primeiros inteiros positivos e' %d\n:  ", n, soma);

return 0;
}
