#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades:
  //Quis deixar as variáveis em inglês, pois é uma prática que eu tenho.
  char states;
  char code[3]; 
  char city[30];
  int population;
  float area;
  float pib;
  int touristAttractions;

  // Área para entrada de dados:
  //Resolvi deixar as instruções entre parêntesis para tentar evitar digitacao incorreta do usuário.
  printf("Digite o estado (Letras A até H]): ");
  scanf("%c", &states);
  printf("Escolha código deste estado (a letra que escolheu + números de 01 até 04, Ex.: H03): ");
  scanf("%s", code);
  printf("Nome da cidahde (Não use espaço nem acentuação. Ex.: Sao_Paulo): ");
  scanf("%s", city);
  printf("População (digite apenas valor inteiro): ");
  scanf("%d", &population);
  printf("Área (em km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Quantidade de atrações turísticas (apenas valores inteiros): ");
  scanf("%d", &touristAttractions);


  // Área para exibição dos dados da cidade:
  printf("Carta 1: \n");
  printf("Estado: %c", states);



return 0;
} 
