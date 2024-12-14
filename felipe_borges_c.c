/*
* Autor: felipe martins machado borges
* Linguagem: C
* Data: 14/12/2024
* Descrição: Um sorteador de itens, que com um numero de 1 a 10, ele retorna oque você ganhou
* Funcionalidade: principal função EP ( embaralhar premios ), e main função principal do código
* Versão: 1.0
*/
#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

// Lista de prêmios
char* premios[] = {"Carro", "Moto", "Televisão", "PC", "Casa", "Dinheiro", "Iphone", "Computador", "Bola de Basquete", "Copo Stanley"};

// Função para embaralhar a lista de prêmios
void EP(char* premios_aleatorios[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {  // Realiza uma iteração sobre cada índice da lista de prêmios
        int j = rand() % tamanho;  // Gera um índice aleatório dentro do intervalo da lista
        // Troca os prêmios nas posições i e j
        char* temp = premios_aleatorios[i];
        premios_aleatorios[i] = premios_aleatorios[j];
        premios_aleatorios[j] = temp;
    }
}

// Função principal para a execução do programa
int main() {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com a hora atual

    // Solicita ao usuário que escolha um número
    printf("Escolha um número de 1 a 10: ");
    int numero;
    scanf("%d", &numero);  // Recebe o número digitado pelo usuário

    if (numero >= 1 && numero <= 10) {  // Verifica se o número está dentro do intervalo de 1 a 10
        char* premios_aleatorios[10];  // Cria uma cópia da lista de prêmios original
        for (int i = 0; i < 10; i++) {
            premios_aleatorios[i] = premios[i];
        }

        EP(premios_aleatorios, 10);  // Chama a função EP para embaralhar os prêmios

        // Seleciona o prêmio correspondente ao número escolhido pelo usuário
        char* premio_escolhido = premios_aleatorios[numero - 1];
        printf("Você ganhou um(a): %s\n", premio_escolhido);  // Exibe o prêmio que o usuário ganhou
    } else {  // Caso o número não seja entre 1 e 10, exibe uma mensagem que o número é inválido
        printf("Escolha um número entre 1 e 10.\n");
    }

    return 0;  // Encerra o programa
}