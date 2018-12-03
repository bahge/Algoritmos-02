/**
 * @file    index.c
 * @author  Leandro Costa Garcia
 * @data    03/dez/2018
 *
 * @brief   Resolução do exercício 05
 * 
 */
#include <stdio.h>
#include <stdbool.h>

void main () {
    // Variáveis
    typedef struct {
      int codigo;
      char nome[50];
      float valor; 
    } Produto; 
    Produto v[5];
    Produto aux;
    int posicao, optmenu;
    bool trocou, opcao;


    // Mensagem de boas vindas
    printf("\n----------------------------------------------------------\n");
    printf("\E[33mBem vindos ao sistema de ordenação\E[0m\n");
    printf("----------------------------------------------------------\n");
      
    for(posicao = 0; posicao < 5; posicao++)
    {
        printf("Digite o codigo do produto %d:", posicao + 1);
        scanf("%d%*c", &v[posicao].codigo);
        printf("Digite o nome do produto sem espaços %d:", posicao + 1);
        scanf("%s%*c", &v[posicao].nome);
        printf("Digite o valor do produto %d:", posicao + 1);
        scanf("%f%*c", &v[posicao].valor);
    }
    
    opcao = true;
    
    while( opcao ){
        printf("Selecione uma opção:\n");
        printf("1 – Ordenar por código\n");
        printf("2 – Ordenar por valor\n");
        scanf("%d", &optmenu );
        if ( optmenu == 1 | optmenu == 2 ) {
            opcao = false;
        } else {
            printf("\E[33mOpção inválida!\E[0m\n");
        }
    }
    if ( optmenu == 1 ){
        trocou = true;
        while(trocou){
            trocou = false;
            for(posicao = 0; posicao < 4; posicao++)
            {
                if ( v[posicao].codigo > v[posicao+1].codigo ) {
                    aux = v[posicao];
	                v[posicao] = v[posicao+1];
	                v[posicao+1] = aux;
	                trocou = true;
                }
            }
        }
    }
    if ( optmenu == 2 ){
        trocou = true;
        while(trocou){
            trocou = false;
            for(posicao = 0; posicao < 4; posicao++)
            {
                if ( v[posicao].valor > v[posicao+1].valor ) {
                    aux = v[posicao];
	                v[posicao] = v[posicao+1];
	                v[posicao+1] = aux;
	                trocou = true;
                }
            }
        }
    }

    for(posicao = 0; posicao < 5; posicao++)
    {
        printf("Produto %d | %s | R$ %.2f\n", v[posicao].codigo, v[posicao].nome, v[posicao].valor);
    }
    
}