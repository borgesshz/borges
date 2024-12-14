/*
* Autor:Felipe Martins Machado Borges
* Linguagem: C++
* Data: 14/12/2024
* Descrição: Sorteador de premios, de acordo com numero escolhido, pelo usuario
* Funcionalidades:EP (embaralhador de premios) e main função principal do programa
* Versão: 1.0
*/

#include <iostream> 
#include <cstdlib>  
#include <ctime>     
#include <string>     

using namespace std; 

// Lista de prêmios
string premios[] = {"Carro", "Moto", "Televisão", "PC", "Casa", "Dinheiro", "Iphone", "Computador", "Bola de Basquete", "Copo Stanley"};

// Função para embaralhar a lista de prêmios
void EP(string premios_aleatorios[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {  // realiza uma iteração sobre cada índice da lista de prêmios
        int j = rand() % tamanho;  // Gera um índice aleatório dentro do intervalo da lista
        // Troca os prêmios nas posições i e j
        swap(premios_aleatorios[i], premios_aleatorios[j]);
    }
}

// Função principal
int main() {
    srand(time(NULL));  // gera os numeros aleatorios

    // Solicita ao usuário que escolha um número
    cout<<"Escolha um número de 1 a 10: ";
    int numero;
    cin>>numero;  // Recebe o número digitado pelo usuário

    if (numero >= 1 && numero <= 10) {  // Verifica se o número está dentro do intervalo de 1 a 10
        string premios_aleatorios[10];  // Cria uma cópia da lista de prêmios original
        for (int i = 0; i < 10; i++) {
            premios_aleatorios[i] = premios[i];
        }

        EP(premios_aleatorios,10);  // Chama a função EP para embaralhar os prêmios

        // Seleciona o prêmio correspondente ao número escolhido pelo usuário
        string premio_escolhido = premios_aleatorios[numero - 1];
        cout<<"Você ganhou um: "<<premio_escolhido << endl;  // Exibe o prêmio que o usuário ganhou
    } else {  // Caso o número não seja entre 1 e 10, exibe uma mensagem que o número é inválido
        cout<<"Escolha um número entre 1 e 10."<<endl;
    }

    return 0;  // Encerra o programa
}