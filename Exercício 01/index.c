/**
 * @file    index.c
 * @author  Leandro Costa Garcia
 * @data    02/dez/2018
 *
 * @brief   Resolução do exercício 01
 * 
 */
#include <stdio.h>

void main () {
    // Variáveis
    float media;
    float n01, n02, n03;
    // Mensagem de boas vindas
    printf("\n----------------------------------------------------------\n");
    printf("\E[33mBem vindos ao sistema de cálculo de média\E[0m\n");
    printf("----------------------------------------------------------\n");
    printf("Digite a primeira nota\n");
    scanf("%f", &n01);
    printf("Digite a segunda nota\n");
    scanf("%f", &n02);
    printf("Digite a terceira nota\n");
    scanf("%f", &n03);

    media = ( n01 + n02 + n03 ) / 3;
    printf("A média é: %.2f\n", media);
}