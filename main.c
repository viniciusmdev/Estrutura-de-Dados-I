#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],i,j,valor, cont,cont2;
    j=valor=cont=cont2=0;
    for(i=0;i<10;i++){
        printf("Digite um valor inteiro: "); //preenchimento vetor
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o valor a ser procurado:"); //definição valor a ser procurado
    scanf("%d", &valor);

    printf("\nNumeros Repetidos:\n");

    for(i=0;i<10;i++){ // busca valor
        if(vetor[i]==valor){
           cont++;
           printf("Posicao: %d - Valor: %d\n", i+1, vetor[i]);
        }
        else{
            vetor[j] = vetor[i]; //preenchimento novo conjunto
            j++;
            cont2++;
        }
    }
    printf("\nQuantidade numeros repetidos: %d\n", cont); //qtd numeros repetidos

    printf("\nNovo Conjunto:\n"); //impressao novo conjunto
    for(j=0;j<cont2;j++){
        printf("Posicao: %d - Valor: %d\n", j+1, vetor[j]);

    }

    return 0;
}

