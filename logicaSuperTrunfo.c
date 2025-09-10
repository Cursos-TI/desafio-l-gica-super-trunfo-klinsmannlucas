#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas: 
    char limpaBuffer;

    // Variáveis para carta 1:
    char nomeDaCidade1[20];          
    char codigoDaCidade1[4];     //Código do cidade, ex A01
    unsigned long int populacao1;
    int quantidadeDePontosTuristicos1;
    float area1;
    double pib1;
    
    // Variáveis para carta 2:
    char nomeDaCidade2[20];         
    char codigoDaCidade2[4];     //Código do cidade, ex A01
    unsigned long int populacao2;
    int quantidadeDePontosTuristicos2;
    float area2;
    double pib2;

    // Cadastro das Cartas:
    
    //Coleta de dados para a carta do cidade 1.
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigoDaCidade1);
    scanf("%c", &limpaBuffer);

    printf("Digite o nome da cidade da carta 1: \n");
    fgets(nomeDaCidade1, 20, stdin);
    // Remove o \n da string
    nomeDaCidade1[strlen(nomeDaCidade1) - 1] = '\0';

    printf("Digite a população do cidade da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos no cidade da carta 1: \n");
    scanf("%d", &quantidadeDePontosTuristicos1);

    printf("Digite a área do cidade da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do cidade da carta 1: \n");
    scanf("%lf", &pib1);

    //Coleta de dados para a carta do cidade 2.
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigoDaCidade2);
    scanf("%c", &limpaBuffer);

    printf("Digite o nome da cidade da carta 2: \n");
    fgets(nomeDaCidade2, 20, stdin);
    // Remove o \n da string
    nomeDaCidade2[strlen(nomeDaCidade2) - 1] = '\0';

    printf("Digite a população do cidade da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos no cidade da carta 2: \n");
    scanf("%d", &quantidadeDePontosTuristicos2);

    printf("Digite a área do cidade da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do cidade da carta 2: \n");
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
    // Variáveis para carta Vencedora:
    int pontuacao1 = 0,pontuacao2 = 0; // 0 = empate, 1 = carta 1, 2 = carta 2
    int menu,menu2;
    char atributo1[30],atributo2[30]; // Nome do atributo
    double atributo1Valor,atributo2Valor;// Capturar o valor para mostrar mais tarde da cidade 1
    double atributo1Valor2,atributo2Valor2;// Capturar o valor para mostrar mais tarde da cidade 2

    printf("Escolha a 1 de atributo para comparação: \n");
    printf("1 - População\n");
    printf("2 - Quantidade de pontos turisticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        populacao1 == populacao2 ? (pontuacao1 = 0) : ((populacao1 > populacao2) ? (pontuacao1 = 1) : (pontuacao1 = 2));

        atributo1Valor = (double)populacao1;
        atributo2Valor = (double)populacao2;
        strcpy(atributo1, "População");
        break;

    case 2:
        quantidadeDePontosTuristicos1 == quantidadeDePontosTuristicos2 ? (pontuacao1 = 0) : (quantidadeDePontosTuristicos1 > quantidadeDePontosTuristicos2 ? (pontuacao1 = 1) : (pontuacao1 = 2));
        
        atributo1Valor = quantidadeDePontosTuristicos1;
        atributo2Valor = quantidadeDePontosTuristicos2;

        strcpy(atributo1, "Qtd de Pontos Turísticos");
        break;

    case 3:
        area1 == area2 ? (pontuacao1 = 0) : (area1 > area2 ? (pontuacao1 = 1) : (pontuacao1 = 2));

        atributo1Valor = area1;
        atributo2Valor = area2;

        strcpy(atributo1, "Área");
        break;

    case 4:
        pib1 == pib2 ? (pontuacao1 = 0) : (pib1 > pib2 ? (pontuacao1 = 1) : (pontuacao1 = 2));

        atributo1Valor = pib1;
        atributo2Valor = pib2;

        strcpy(atributo1, "PIB");
        break;

    case 5:
        densidadePopulacional1 == densidadePopulacional2 ? (pontuacao1 = 0) : densidadePopulacional1 < densidadePopulacional2 ? (pontuacao1 = 1) : (pontuacao1 = 2);

        atributo1Valor = densidadePopulacional1;
        atributo2Valor = densidadePopulacional2;

        strcpy(atributo1, "Densidade Populacional");
        break;
    
    case 6:
        pibPerCapita1 == pibPerCapita2 ? (pontuacao1 = 0) : pibPerCapita1 > pibPerCapita2 ? (pontuacao1 = 1) : (pontuacao1 = 2);

        atributo1Valor = pibPerCapita1;
        atributo2Valor = pibPerCapita2;

        strcpy(atributo1, "PIB per Capita");
        break;
    
    case 7:
        superPoder1 == superPoder2 ? (pontuacao1 = 0) : superPoder1 > superPoder2 ? (pontuacao1 = 1) : (pontuacao1 = 2);

        atributo1Valor = superPoder1;
        atributo2Valor = superPoder2;

        strcpy(atributo1, "Super Poder");
        break;

    default:
        printf("Valor digitado inválido.");
        return 0;
        break;
    }

    printf("Escolha a 2 de atributo para comparação: \n");
    menu == 1 ? : printf("1 - População\n");
    menu == 2 ? : printf("2 - Quantidade de pontos turisticos\n");
    menu == 3 ? : printf("3 - Área\n");
    menu == 4 ? : printf("4 - PIB\n");
    menu == 5 ? : printf("5 - Densidade Populacional\n");
    menu == 6 ? : printf("6 - PIB per Capita\n");
    menu == 7 ? : printf("7 - Super Poder\n");
    scanf("%d",&menu2);
    
    if(menu == menu2){
        printf("Opcão inválida.");
        return 0;
    }

    switch (menu2)
    {
    case 1:
        populacao1 == populacao2 ? (pontuacao2 = 0) : ((populacao1 > populacao2) ? (pontuacao2 = 1) : (pontuacao2 = 2));

        atributo1Valor2 = (double)populacao1;
        atributo2Valor2 = (double)populacao2;
        
        strcpy(atributo2, "População");
        break;

    case 2:
        quantidadeDePontosTuristicos1 == quantidadeDePontosTuristicos2 ? (pontuacao2 = 0) : (quantidadeDePontosTuristicos1 > quantidadeDePontosTuristicos2 ? (pontuacao2 = 1) : (pontuacao2 = 2));
   
        atributo1Valor2 = quantidadeDePontosTuristicos1;
        atributo2Valor2 = quantidadeDePontosTuristicos2;
        
        strcpy(atributo2, "Qtd  de Pontos Turísticos");
        break;

    case 3:
        area1 == area2 ? (pontuacao2 = 0) : (area1 > area2 ? (pontuacao2 = 1) : (pontuacao2 = 2));
     
        atributo1Valor2 = area1;
        atributo2Valor2 = area2;
        
        strcpy(atributo2, "Área");
        break;

    case 4:
        pib1 == pib2 ? (pontuacao2 = 0) : (pib1 > pib2 ? (pontuacao2 = 1) : (pontuacao2 = 2));
   
        atributo1Valor2 = pib1;
        atributo2Valor2 = pib2;
        
        strcpy(atributo2, "PIB");
        break;

    case 5:
        densidadePopulacional1 == densidadePopulacional2 ? (pontuacao2 = 0) : densidadePopulacional1 < densidadePopulacional2 ? (pontuacao2 = 1) : (pontuacao2 = 2);
      
        atributo1Valor2 = densidadePopulacional1;
        atributo2Valor2 = densidadePopulacional2;
        
        strcpy(atributo2, "Densidade Populacional");
        break;
    
    case 6:
        pibPerCapita1 == pibPerCapita2 ? (pontuacao2 = 0) : pibPerCapita1 > pibPerCapita2 ? (pontuacao2 = 1) : (pontuacao2 = 2);
     
        atributo1Valor2 = pibPerCapita1;
        atributo2Valor2 = pibPerCapita2;
        
        strcpy(atributo2, "PIB per Capita");
        break;
    
    case 7:
        superPoder1 == superPoder2 ? (pontuacao2 = 0) : superPoder1 > superPoder2 ? (pontuacao2 = 1) : (pontuacao2 = 2);
        
        atributo1Valor2 = superPoder1;
        atributo2Valor2 = superPoder2;
        
        
        strcpy(atributo2, "Super Poder");
        break;

    default:
        printf("Valor digitado inválido.");
        return 0;
        break;
    }

    pontuacao1 == 0 ? (printf("Empate entre a cidade %s (%.2f) e %s (%.2f), no atributo %s.\n", nomeDaCidade1,atributo1Valor,nomeDaCidade2,atributo2Valor,atributo1)) : (pontuacao1 == 1 ? (printf("Cidade de %s (%.2f) venceu a cidade %s (%.2f) no atribudo %s.\n", nomeDaCidade1,atributo1Valor,nomeDaCidade2,atributo2Valor,atributo1)) : (printf("Cidade de %s (%.2f) venceu a codade %s (%.2f) no atribudo %s.\n", nomeDaCidade1,atributo1Valor,nomeDaCidade2,atributo2Valor,atributo1)));
    
    pontuacao2 == 0 ? (printf("Empate entre a cidade %s (%.2f) e %s (%.2f), no atributo %s.\n", nomeDaCidade1,atributo1Valor2,nomeDaCidade2,atributo2Valor2,atributo2)) : (pontuacao1 == 1 ? (printf("Cidade de %s (%.2f) venceu a cidade %s (%.2f) no atribudo %s.\n",  nomeDaCidade1,atributo1Valor2,nomeDaCidade2,atributo2Valor2,atributo2)) : (printf("Cidade de %s (%.2f) venceu a codade %s (%.2f) no atribudo %s.\n",  nomeDaCidade1,atributo1Valor2,nomeDaCidade2,atributo2Valor2,atributo2)));

    return 0;
}
