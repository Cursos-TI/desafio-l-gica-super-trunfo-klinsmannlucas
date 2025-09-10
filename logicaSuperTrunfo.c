#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:

    // Variáveis para carta 1:
    char nomeDoEstado1;          //Estado de A a H
    char codigoDoEstado1[4];     //Código do estado, ex A01
    unsigned long int populacao1;
    int quantidadeDePontosTuristicos1;
    float area1;
    double pib1;
    
    // Variáveis para carta 2:
    char nomeDoEstado2;          //Estado de A a H
    char codigoDoEstado2[4];     //Código do estado, ex A01
    unsigned long int populacao2;
    int quantidadeDePontosTuristicos2;
    float area2;
    double pib2;

    // Cadastro das Cartas:
    
    //Coleta de dados para a carta do estado 1.
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigoDoEstado1);
    fflush(stdin);

    nomeDoEstado1 = (char)codigoDoEstado1[0];

    printf("Digite a população do estado da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos no estado da carta 1: \n");
    scanf("%d", &quantidadeDePontosTuristicos1);

    printf("Digite a área do estado da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado da carta 1: \n");
    scanf("%lf", &pib1);

    //Coleta de dados para a carta do estado 2.
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigoDoEstado2);
    fflush(stdin);

    nomeDoEstado2 = (char)codigoDoEstado2[0];

    printf("Digite a população do estado da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos no estado da carta 2: \n");
    scanf("%d", &quantidadeDePontosTuristicos2);

    printf("Digite a área do estado da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 2: \n");
    scanf("%lf", &pib2);
    

    double densidadePopulacional1 = (double)populacao1/area1;
    double pibPerCapita1 = pib1/area1;
    // Casting do unsigned long int para double, para evitar a perda de possivel dados caso for convertido pra float, o restanto é mantido em float.
    double superPoder1 = ((double)populacao1 + area1 + pib1 + (float)quantidadeDePontosTuristicos1 + pibPerCapita1)/densidadePopulacional1;

    double densidadePopulacional2 = (double)populacao2/area2;
    double pibPerCapita2 = pib2/area2;
    // Casting do unsigned long int para double, para evitar a perda de possivel dados caso for convertido pra float, o restanto é mantido em float.
    double superPoder2 = ((double)populacao2 + area2 + pib2 + quantidadeDePontosTuristicos2 + pibPerCapita2)/densidadePopulacional2;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Variáveis para carta Vencedora:
    int pontuacao1 = 0,pontuacao2 = 0;
    int menu;
    printf("Escolha opcão de comparação: \n1 - População\n2 - Quantidade de pontos turisticos\n3 - Área\n4 - Pib\n5 - Densidade Populacional\n6 - Pib per Capita\n7 - Super Poder\n8 - Soma de todos\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("Cidade vencedora(População) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(População) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;

    case 2:
        if(quantidadeDePontosTuristicos1 > quantidadeDePontosTuristicos2){
            printf("Cidade vencedora(Qtd De Pontos Turísticos) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(Qtd De Pontos Turísticos) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;

    case 3:
        if(area1 > area2){
            printf("Cidade vencedora(Área) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(Área) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;

    case 4:
        if(pib1 > pib2){
            printf("Cidade vencedora(PIB) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(PIB) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;

    case 5:
        if(densidadePopulacional1 < densidadePopulacional2){
            printf("Cidade vencedora(Densidade Populacional) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(Densidade Populacional) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;
    
    case 6:
        if(pibPerCapita1 > pibPerCapita2){
            printf("Cidade vencedora(PIB per Capita) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(PIB per Capita) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;
    
    case 7:
         if(superPoder1 > superPoder2){
            printf("Cidade vencedora(Super Poder) é: %c\n", nomeDoEstado1);
            pontuacao1++;
        }else{
            printf("Cidade vencedora(Super Poder) é: %c\n", nomeDoEstado2);
            pontuacao2++;
        }
        break;

    case 8:
        if(pontuacao1 > pontuacao2){
            printf("Cidade vencedora(Total) é: %c\n, com %d", nomeDoEstado1,pontuacao1);
        }else{
            printf("Cidade vencedora(Total) é: %c\n, com %d", nomeDoEstado2,pontuacao2);
        }
        break;

    default:
        break;
    }
    return 0;
}
