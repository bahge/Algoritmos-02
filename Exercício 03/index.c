/**
 * @file    index.c
 * @author  Leandro Costa Garcia
 * @data    03/dez/2018
 *
 * @brief   Resolução do exercício 03
 * 
 */
#include <stdio.h>

void main () {
    // Variáveis
    float vet[10];
    float valor;
    int posicao;
    // Mensagem de boas vindas
    printf("\n----------------------------------------------------------\n");
    printf("\E[33mBem vindos ao sistema de busca de ocorrências\E[0m\n");
    printf("----------------------------------------------------------\n");
    
    
    for(posicao = 0; posicao < 10; posicao++)
    {
        printf("Digite o valor da posição %d:", posicao + 1);
        scanf("%f", &vet[posicao]);
    }

    printf("Digite o valor a ser procurado:");
    scanf("%f", &valor);
    
    for(posicao = 0; posicao < 10; posicao++)
    {
        if ( vet[posicao] == valor ) {
            printf("O valor foi encontrado na posição: %d\n", posicao + 1 );
        }   
    }
}