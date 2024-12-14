'''
* Autor: Felipe Martins Machado Borges
* Linguagem: Python
* Data: 14/12/2024
* Descrição: Um programa que sorteia itens de acordo com o numero escolhido, e toda jogada ele embaralha esses itens 
* Funcionalidades: EP ( embaralhar premios) e main função principal de inicio do programa
* Versão: 1.0
'''

import random  # Gera numeros aleatorios

# Lista de premios
premios = ["Carro", "Moto", "Televisão", "PC", "Casa", "Dinheiro", "Iphone", "Computador", "Bola de Basquete", "Copo Stanley"]

# Função para embaralhar a lista de premios
def EP():
    premios_aleatorios = premios[:]  # Cria uma cópia da lista de premios original
    for i in range(len(premios_aleatorios)):  # realiza uma interção sobre cada índice da lista de premios
        j = random.randint(0, len(premios_aleatorios) - 1)  # Gera um indice aleatorio dentro do intervalo da lista.
        premios_aleatorios[i], premios_aleatorios[j] = premios_aleatorios[j], premios_aleatorios[i]  # Troca os premios nas posições i e j
    return premios_aleatorios  # Retorna a lista de premios embaralhada

# Função principal para a execução do programa
def main():
    print("Escolha um número de 1 a 10:")  # Solicita ao usuario que escolha um numero
    numero = int(input())  # Recebe o numero digitado pelo usuario e converte para int
    if 1 <= numero <= 10:  # Verifica se o numero esta dentro do intervalo de 1 e 10
        premios_sorteados = EP()  # Chama a função EP para embaralhar os premios
        premio_escolhido = premios_sorteados[numero - 1]  # Seleciona o premio correspondente ao numero escolhido pelo usuario
        print(f"Você ganhou um: {premio_escolhido}")  # Exibe o premio que o usuario ganhou
    else:  # Caso o numero não seja entre 1 e 10 exibe uma mensagem que o numero é invalido
        print("escolha um número entre 1 e 10.")  

# Chama a função principal para iniciar o programa
main()