#include <stdio.h>

int main() {
    //### LOGICA DE PROGRAMACAO - TEMA 2 ###
    
    // CADASTRO DE CARTAS

    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_P1, pib_percapta1, densidade_P2, pib_percapta2;
    int numero_pontos1, numero_pontos2;
    float densidadePinvertida1, densidadePinvertida2;
    

    //Variaveis Resultados (Comparacao)
    int resultadoPopulacao1;
    int resultadoArea1;
    int resultadoPIB1;
    int resultadoPIBpercapita1;
    int resultadoDensidadePinvertida1;
    int resultadoPontosTuristicos1;
    int opcao;

    // DADOS DA CARTA 1

    printf("\n=== CADASTRO DA CARTA 1 ===\n");

    printf("Insira uma letra de 'A' a 'Z' representando a sua CARTA: \n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo1);

    printf("Insira o nome da CIDADE que está em sua CARTA: \n");
    scanf("%19s", nome1);

    printf("Insira a população: \n");
    scanf("%lu", &populacao1);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da CIDADE que está descrito em sua carta: \n");
    scanf("%e", &pib1);

    printf("Insira o número de pontos turísticos da CIDADE em sua carta: \n");
    scanf("%d", &numero_pontos1);

    // DADOS DA CARTA 2

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Insira uma letra de 'A' a 'Z' representando a sua CARTA: \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: \n");
    scanf("%19s", codigo2);

    printf("Insira o nome da CIDADE que está em sua CARTA: \n");
    scanf("%19s", nome2);

    printf("Insira a população: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área (em km²) da sua carta: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da CIDADE que está descrito em sua carta: \n");
    scanf("%e", &pib2);

    printf("Insira o número de pontos turísticos da CIDADE em sua carta: \n");
    scanf("%d", &numero_pontos2);

    //CALCULOS DE DENSIDADE POPULACIONAL

    densidade_P1 = populacao1 / area1;
    densidade_P2 = populacao2 / area2;
    densidadePinvertida1 = 1 / densidade_P1;
    densidadePinvertida2 = 1 / densidade_P2;
    
    //CALCULO PIB PER CAPITA    

    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;



    // COMPARANDO RESULTADOS - MENU

    printf("Selecione qual ATRIBUICAO da carta quer compatar:\n");
    printf("Atribuicao 1 populacoa= \n");
    printf("Atribuicao 2 Area= \n");
    printf("Atribuicao 3 Pib= \n");
    printf("Atribuicao 4 Densidade Populacional= \n");
    printf("Atribuicao 5 pontos turisticos= \n");
    scanf("%d", &opcao);

    //exibido resultado do menu
switch (opcao)
{
case 1:
    printf ("Comparando POPULACAO de ambas as cartas\n");
    break;
    case 2:
    printf ("Comparando AREA de ambas as cartas\n");
    break;
    case 3:
    printf ("Comparando PIB de ambas as cartas\n");
    break;
    case 4:
    printf ("Comparando DENSIDADE POPULACIONAL de ambas as cartas\n");
    break;
    case 5:
    printf ("Comparando PONTOS TURISTICOS de ambas as cartas\n");
    break;
default:
printf("Opcao invalida!\n");
    break;
}
if ((populacao1 == populacao2) || (area1 == area2) || (pib1 == pib2) || (densidade_P1 == densidade_P2) || (numero_pontos1 == numero_pontos2))
{
    printf ("### Empate ### \n");
}else if ((populacao1 > populacao2) || (area1 > area2) || (pib1 > pib2) || (densidade_P1 > densidade_P2) || (numero_pontos1 > numero_pontos2))
{
    printf ("Carta 1 VENCEU!\n");
}else {
    printf ("Carta 2 Venceu!\n");
}


    


        //COMPARACAO COMPOSTA. NAO FOI NECESSARIO MAIS
    /*printf ("\n==== DUELO DE CARTAS ====\n");

    if (populacao1 > populacao2)
    {
        printf ("A POPULACAO da Carta 1 Venceu!!!\n");
    }
    else printf ("A POPULACAO da Carta 2 Venceu!\n");
    
    //AREA
    if (area1 > area2)
    {
        printf ("A AREA da Carta 1 Venceu!!!\n");
    }
    else printf ("A AREA da Carta 2 Venceu!\n");
    
    //PIB
    if (pib1 > pib2)
    {
        printf ("O PIB da Carta 1 Venceu!!!\n");
    }
    else printf ("O PIB da Carta 2 Venceu!\n");
    
    //NUMERO DE PONTOS TURISTICOS
    if (numero_pontos1 > numero_pontos2)
    {
        printf ("O NUMERO DE PONTOS TURISTICOS da Carta 1 Venceu!!!\n");
    }
    else printf ("O NUMERO DE PONTOS TURISTICOS da Carta 2 Venceu!\n");
    
    //DESIDADE POPULACIONAL
    if (densidadePinvertida1 > densidadePinvertida2)
    {
        printf ("A DENSIDADE POPULACIONAL da Carta 1 Venceu!!!\n");
    }
    else printf ("A DENSIDADE POPULACIONAL da CARTA 2 Venceu!\n");
    
    //PIB PER CAPITA
    if (pib_percapta1 > pib_percapta2)
    {
        printf ("O PIB PER CAPITA da Carta 1 Venceu!!!\n");
    }
    else printf ("O PIB PER CAPITA da Carta 2 Venceu!\n");
    */

    return 0;
}