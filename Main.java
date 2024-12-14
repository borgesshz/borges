/*
* Autor: Felipe Martins Machado Borges
* Linguagem: Java
* Data: 14/12/2024
* Descrição: Sorteador de premios , de acordo com o numero que o usuario escolhe entre 1 e 10
* Funcionalidades: embaralharPremios e a principal main
* Versão: 1.0
*/

import java.util.Random; // Para gerar números aleatórios
import java.util.Scanner; // Para entrada de dados do usuário

public class Main {

    // Lista de prêmios
    static String[] premios = {"Carro", "Moto", "Televisão", "PC", "Casa", "Dinheiro", "Iphone", "Computador", "Bola de Basquete", "Copo Stanley"};

    // Função para embaralhar a lista de prêmios
    public static void embaralharPremios(String[] premiosAleatorios) {
        Random random = new Random(); // Instância para gerar números aleatórios
        for (int i = 0; i < premiosAleatorios.length; i++) { // Realiza uma iteração sobre cada índice da lista de prêmios
            int j = random.nextInt(premiosAleatorios.length); // Gera um índice aleatório dentro do intervalo da lista
            // Troca os prêmios nas posições i e j
            String temp = premiosAleatorios[i];
            premiosAleatorios[i] = premiosAleatorios[j];
            premiosAleatorios[j] = temp;
        }
    }

    // Função principal
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); // Scanner para entrada de dados do usuário

        // Solicita ao usuário que escolha um número
        System.out.print("Escolha um número de 1 a 10: ");
        int numero = input.nextInt(); // Recebe o número digitado pelo usuário

        if (numero >= 1 && numero <= 10) { // Verifica se o número está dentro do intervalo de 1 a 10
            String[] premiosAleatorios = premios.clone(); // Cria uma cópia da lista de prêmios original
            embaralharPremios(premiosAleatorios); // Chama a função para embaralhar os prêmios

            // Seleciona o prêmio correspondente ao número escolhido pelo usuário
            String premioEscolhido = premiosAleatorios[numero - 1];
            System.out.println("Você ganhou um: " + premioEscolhido); // Exibe o prêmio que o usuário ganhou
        } else { // Caso o número não seja entre 1 e 10, exibe uma mensagem que o número é inválido
            System.out.println("Escolha um número entre 1 e 10.");
        }

        input.close(); // Fecha o scanner para liberar recursos
}
}