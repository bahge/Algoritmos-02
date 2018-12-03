/**
 * @file    index.c
 * @author  Leandro Costa Garcia
 * @data    02/dez/2018
 *
 * @brief   Resolução do exercício 02
 * 
 */
#include <stdio.h>

void main () {
    // Variáveis
    int idade;
    // Mensagem de boas vindas
    printf("\n----------------------------------------------------------\n");
    printf("\E[33mBem vindos ao sistema de classificação\E[0m\n");
    printf("----------------------------------------------------------\n");
    printf("Digite a idade\n");
    scanf("%d", &idade);
    
    
    if ( idade >= 5 && idade <= 7 ) {
        printf("Classificação: Infantil A\n");
    }
    else if ( idade > 7 && idade <= 10 ) {
        printf("Classificação: Infantil B\n");
    }
    else if ( idade > 10 && idade <= 13 ) {
        printf("Classificação: Juvenil A\n");
    }
    else if ( idade > 13 && idade <= 17 ) {
        printf("Classificação: Juvenil B\n");
    }
    else if ( idade > 17 && idade <= 25 ) {
        printf("Classificação: Sênior\n");
    }
    else {
        printf("Classificação: Sem classificação\n");
    }
}