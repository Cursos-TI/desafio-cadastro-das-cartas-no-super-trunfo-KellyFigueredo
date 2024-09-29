#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   printf ("Desafio Super Trunfo:\n");
   char código;
   char nome[50];
   int população;
   float área;
   float pib;
   int pontoturisticos;

   printf ("Digite o código da carta: \n");
   scanf("%s", &código);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);

   printf("Digite a população: \n");
   scanf("%d", &população);

   printf ("Digite a áera: \n");
   scanf("%f", &área);

   printf("Digite o PIB: \n");
   scanf("%F", &pib);

   printf("Digite o número de ponto turístico: \n");
   scanf("%d", &pontoturisticos)

   printf("Carta: %s - Cidade: %S\n", código, nome);
   printf("População: %d\n", população);
   printf("Área: %f\n", área);
   printf("PiB: %f - Nímero de ponto turístico: %d\n", pib, pontoturisticos);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
