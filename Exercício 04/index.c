/**
 * @file    index.c
 * @author  Leandro Costa Garcia
 * @data    03/dez/2018
 *
 * @brief   Resolução do exercício 04
 * 
 */
#include <stdio.h>

void main () {
    // Variáveis
    int posicao;
    int fatorial;
    int resfatorial = 1;
    // Mensagem de boas vindas
    printf("\n----------------------------------------------------------\n");
    printf("\E[33mBem vindos ao sistema de cálculo de fatorial\E[0m\n");
    printf("----------------------------------------------------------\n");
    
    printf("Digite um número inteiro maior que 0:\n");
    scanf("%d", &fatorial);

    for(posicao = 1; posicao < fatorial + 1; posicao++)
    {
        resfatorial = resfatorial * posicao;
    }
    printf("O resultado é do fatorial de %d é: %d\n", fatorial, resfatorial);
}