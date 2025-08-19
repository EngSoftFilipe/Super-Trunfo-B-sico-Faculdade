#include <stdio.h>

int main() {

    // Carta 1
    char estado[20];
    char CodigoDaCarta[20];
    char NomeDaCidade[20];
    int populacao;
    int Numero_de_pontos_turisticos;
    float area_em_KM;
    float pib;
    float pib_per_capta;
    float densidade_populacional;

    // Carta 2
    char estado_2[20];
    char CodigoDaCarta_2[20];
    char NomeDaCidade_2[20];
    int populacao_2;
    int Numero_de_pontos_turisticos_2;
    float area_em_KM_2;
    float pib_2;
    float pib_per_capta_2;
    float densidade_populacional_2;

            //Carta 1 
                printf("\nCarta 1:\n\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);

    printf("Qual o codigo da carta? entre A01 a A08: "); 
    scanf("%s", CodigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", NomeDaCidade);

    printf("Qual a populacao? ");
    scanf("%d", &populacao);

    printf("Quantos pontos turisticos essa cidade tem? ");
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("Qual a area em KM? ");
    scanf("%f", &area_em_KM);

    printf("Digite o numero do PIB: ");
    scanf("%f", &pib);

    pib_per_capta = pib / (float) populacao;
    densidade_populacional = (float) populacao / area_em_KM;

            //Carta 2 
                printf("\nCarta 2:\n\n");

        printf("Digite o nome do estado: ");
        scanf(" %[^\n]", estado_2);

        printf("Qual o codigo da carta? entre A01 a A08: "); 
        scanf("%s", CodigoDaCarta_2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", NomeDaCidade_2);

        printf("Qual a populacao? ");
        scanf("%d", &populacao_2);

        printf("Quantos pontos turisticos essa cidade tem? ");
        scanf("%d", &Numero_de_pontos_turisticos_2);

        printf("Qual a area em KM? ");
        scanf("%f", &area_em_KM_2);

        printf("Digite o numero do PIB: ");
        scanf("%f", &pib_2);

    pib_per_capta_2 = pib_2 / (float) populacao_2;
    densidade_populacional_2 = (float) populacao_2 / area_em_KM_2;

            //Resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", CodigoDaCarta);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos turisticos: %d\n", Numero_de_pontos_turisticos);
    printf("Area: %.2f km²\n", area_em_KM);
    printf("PIB: %.2f\n", pib);
    printf("PIB per capita: %.2f\n", pib_per_capta);
    printf("Densidade populacional: %.2f hab/km\n", densidade_populacional);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", CodigoDaCarta_2);
    printf("Cidade: %s\n", NomeDaCidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Pontos turisticos: %d\n", Numero_de_pontos_turisticos_2);
    printf("Area: %.2f km²\n", area_em_KM_2);
    printf("PIB: %.2f\n", pib_2);
    printf("PIB per capita: %.2f\n", pib_per_capta_2);
    printf("Densidade populacional: %.2f hab/km\n", densidade_populacional_2);

            //Comparacao
    printf("\n===== Comparacao de cartas =====\n");

    if (populacao > populacao_2)
        printf("Populacao - Carta 1: venceu\n");
    else
        printf("Populacao - Carta 2: venceu\n");

    if (area_em_KM > area_em_KM_2)
        printf("Area - Carta 1: venceu\n");
    else
        printf("Area - Carta 2: venceu\n");

    if (pib > pib_2)
        printf("PIB - Carta 1: venceu\n");
    else
        printf("PIB - Carta 2: venceu\n");

    if (Numero_de_pontos_turisticos > Numero_de_pontos_turisticos_2)
        printf("Pontos turisticos - Carta 1: venceu\n");
    else
        printf("Pontos turisticos - Carta 2: venceu\n");

    if (densidade_populacional < densidade_populacional_2)
        printf("Densidade populacional - Carta 1: venceu\n");
    else
        printf("Densidade populacional - Carta 2: venceu\n");

    if (pib_per_capta > pib_per_capta_2)
        printf("PIB per capita - Carta 1: venceu\n");
    else
        printf("PIB per capita - Carta 2: venceu\n");

    return 0;
}
