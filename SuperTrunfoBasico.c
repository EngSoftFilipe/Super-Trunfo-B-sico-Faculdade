#include <stdio.h>

int main() {

char estado[20];
char CodigoDaCarta[20];
char NomeDaCidade [20];
int populacao;
int Numero_de_pontos_turisticos;
float area_em_KM;
float pib;

printf("Digite o nome do estado: \n");
scanf(" %s", estado);

printf("\nQual o codigo da carta? entre A01 a A08: "); 
scanf("%s", CodigoDaCarta);

printf("\nDigite o nome da cidade: ");
scanf("%s", NomeDaCidade);

printf("\nQual a populacao? ");
scanf("%d", &populacao);

printf("\nQuantos pontos turisticos essa cidade tem? ");
scanf("%d", &Numero_de_pontos_turisticos);

printf("\nQual a area em KM? ");
scanf("%f", &area_em_KM);

printf("\nDigite o numero do PIB: ");
scanf("%f", &pib);

printf("\n--- Dados cadastrados ---\n\n");
printf("O estado escolhido foi: %s\n", estado);
printf("O codigo da carta e: %s\n", CodigoDaCarta);
printf("O nome da cidade e: %s\n", NomeDaCidade);
printf("A populacao e: %d\n", populacao);
printf("O numero de pontos turisticos e: %d\n", Numero_de_pontos_turisticos);
printf("A area em KM² e: %.2f\n", area_em_KM);
printf("O PIB da cidade e: %f\n", pib);

return 0;
 
}
