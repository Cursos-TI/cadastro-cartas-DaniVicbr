#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades:
  //Quis deixar as variáveis em inglês, pois é uma prática que eu tenho.
  char states;
  char code[4]; 
  char city[30];
  int population;
  float area;
  float pib;
  int touristAttractions;

  char states2;
  char code2[4]; 
  char city2[30];
  int population2;
  float area2;
  float pib2;
  int touristAttractions2;

  // Área para entrada de dados:
  //Resolvi deixar as instruções entre parêntesis para tentar evitar digitacao incorreta do usuário.
  printf("\n--Dados Carta 1--\n"); //Percebi que para pular uma linha no terminal pode-se colocar \n no início da string;
  printf("Digite o estado (Letras A até H]): ");
  scanf(" %c", &states); //Aqui houve um problema em que não aparecia esse dado ao imprimi, o espaço é essencial para descartar o caractere '\n' do buffer evita que a leitura seja pulada.
  printf("Escolha código deste estado (a letra que escolheu + números de 01 até 04, Ex.: H03): ");
  scanf("%s", code);
  printf("Nome da cidade (Não use espaço. Ex.: São_Paulo): ");
  scanf("%s", city);
  printf("População (digite apenas valor inteiro): ");
  scanf("%d", &population);
  printf("Área (em km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Quantidade de atrações turísticas (apenas valores inteiros): ");
  scanf("%d", &touristAttractions);

  printf("\n--Dados Carta 2--\n");
  printf("Digite o estado (Letras A até H]): ");
  scanf(" %c", &states2);
  printf("Escolha código deste estado (a letra que escolheu + números de 01 até 04, Ex.: H03): ");
  scanf("%s", code2);
  printf("Nome da cidade (Não use espaço. Ex.: São_Paulo): ");
  scanf("%s", city2);
  printf("População (digite apenas valor inteiro): ");
  scanf("%d", &population2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Quantidade de atrações turísticas (apenas valores inteiros): ");
  scanf("%d", &touristAttractions2);

  // Área para exibição dos dados da cidade:
  //Exibe os dados cadastrados da carta 1:
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", states);
  printf("Código: %s\n", code);
  printf("Nome da Cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %.2f\n", area); //Exibir apenas duas casas decimais após a vírgula;
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", touristAttractions);

  //Exibe os dados cadastrados da carta 2:
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", states2);
  printf("Código: %s\n", code2);
  printf("Nome da Cidade: %s\n", city2);
  printf("População: %d\n", population2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", touristAttractions2);

return 0;
} 
