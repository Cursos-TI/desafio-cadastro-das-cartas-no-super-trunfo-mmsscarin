#include <stdio.h>

int main(){

    //nomes das variáveis simples para fácil entendimento
    char uf1, uf2, cod1[3], cod2[3], cidade1[20], cidade2[20];
    int populacao1, populacao2, ptotur1, ptotur2;
    float area1, area2, pib1, pib2;
     
    
    
    //cabeçalho para deixar a tela mais user-friendly
    printf ("SUPER TRUNFO\n");
    printf ("Cadastro de Cartas\n");
    //programa interativo
    printf ("CARTA 1\n");
    printf ("Digite o estado: ");
    scanf (" %c", &uf1);
    printf ("Digite o codigo: ");
    scanf ("%s", &cod1);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", &cidade1);
    printf ("Digite a populacao: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área da cidade: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);
    printf ("Digite a quantidade de pontos turisticos: ");
    scanf ("%d", &ptotur1);
    
    //leitura das informacoes alimentadas pelo usuario e verificacao das variaveis
    printf ("CARTA 1 CADASTRADA\n");
    printf ("Estado: %c\n", uf1);
    printf ("Codigo: %s\n", cod1);
    printf ("Cidade: %s\n", cidade1);
    printf ("Populacao: %d\n", populacao1);
    printf ("Area: %.2f km2\n", area1);
    printf ("PIB: %.2f bi de Reais\n", pib1);
    printf ("Pontos Turisticos: %d\n", ptotur1);

    //interacao esperada para alimentacao do programa
    printf ("CARTA 2\n");
    printf ("Digite o estado: ");
    scanf (" %c", &uf2);
    printf ("Digite o codigo: ");
    scanf ("%s", &cod2);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", &cidade2);
    printf ("Digite a populacao: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da cidade: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);
    printf ("Digite a quantidade de pontos turisticos: ");
    scanf ("%d", &ptotur2);
   
    //leitura das informacoes alimentadas pelo usuario e verificacao das variaveis
    printf ("CARTA 2 CADASTRADA\n");
    printf ("Estado: %c\n", uf2);
    printf ("Codigo: %s\n", cod2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %.2f km2\n", area2);
    printf ("PIB: %.2f bi de Reais\n", pib2);
    printf ("Pontos Turisticos: %d\n", ptotur2);

    return 0;

}