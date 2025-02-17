#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


      // Variáveis carta 1.
   
      char  código1[20];
      char  nome1[20];
      float população1;
      float área1;
      float PIB1;
      char  número1[4];
      
      // Variáveis carta 2.
      
      char  número2[4]; 
      char  código2[20];
      char  nome2[20];
      float população2;
      float área2;
      float PIB2; 
     
      // Coleta os dados da carta 1.
  
      printf("Insira o nome da cidade 1: \n");
      scanf("%s", &nome1);
      
      printf("Insira a populaçao da cidade 1: \n");
      scanf("%e", &população1);
      
      printf("Insira a área da cidade 1: \n");
      scanf("%e", &área1);
      
      printf("Insira o PIB da cidade 1: \n");
      scanf("%e", &PIB1);
      
      printf("Insira o numero de pontos turísticos da cidade 1: \n");
      scanf("%s", &número1);
  
      printf("Insira o código da cidade: \n");
      scanf("%s", &código1); 
  
      // Mostra os valores das cartas 1.
  
      printf("Nome da cidade 1: %s\n", nome1);
      printf("População da cidade 1: %f\n", população1);
      printf("Área da cidade 1: %f\n", área1);
      printf("PIB cidade 1: %f\n", PIB1);
      printf("Pontos turísticos da cidade 1: %s\n", número1);
      printf("Código da cidade: %s\n", código1);
  
      // Coleta os dados da carta 2.
     
      printf("Insira o nome da cidade 2: \n");
      scanf("%s", &nome2);
      
      printf("Insira a populaçao da cidade 2: \n");
      scanf("%e", &população2);
      
      printf("Insira a área da cidade 2: \n");
      scanf("%e", &área2);
      
      printf("Insira o PIB da cidade 2: \n");
      scanf("%e", &PIB2);
      
      printf("Insira o numero de pontos turísticos da cidade 2: \n");
      scanf("%s", &número2);
  
      printf("Insira o código da cidade: \n");
      scanf("%s", &código2); 
  
      // Mostra os valores da carta 2.
  
      printf("Nome da cidade 2: %s\n", nome2);
      printf("População da cidade 2: %f\n", população2);
      printf("Área da cidade 2: %f\n", área2);
      printf("PIB da cidade 2: %f\n", PIB2);
      printf("Pontos turísticos da cidade 2: %s\n", número2);
      printf("Código da cidade: %s\n", código2);
   
      // Comparação das cartas.
  
      if (população1 > população2){
          printf("Com base na comparação de população entre cidade 1 e cidade 2: \n");
          printf("Cidade 1 tem população maior.");
  
  
      } else{
  
      printf("Com base na comparação de população entre cidade 1 e cidade 2: \n");
      printf("Cidade 2 tem pupulação maior.");
      }
   
   
   
   
   
   
   
   
   
   
   
      return 0;
    }