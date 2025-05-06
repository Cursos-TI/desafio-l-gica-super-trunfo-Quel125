#include <stdio.h>

int main(){

// Dados da Carta 1;

char estado1 = 'A';
char codigo1 [10] = "A01";
char cidade1 [50] = "SãoPaulo";
float populacao1= 11.451999;
float area1= 1.52120;
float pib1 = 828.980607;
int pontos_turisticos1= 124;
float densidadePopulacional1 = populacao1 / area1;
float per_capita1 = pib1/ populacao1;

// Dados da Carta 2;

char estado2 = 'B';
char codigo2 [15] = "B02";
char cidade2[20] = "RiodeJaneiro";
double populacao2 = 6.211223 ;
float area2 =1.200329 ;
float pib2 = 359.640 ;
int pontos_turisticos2 = 98 ;
float densidadePopulacional2 = populacao2/ area2;
float per_capita2 = pib2 / populacao2;

// Exibição da carta 1;

printf("Estado:%c \n", estado1);                   
printf("Código: %s \n", codigo1);                  
printf("Cidade: %s \n", cidade1);            
printf("População ( em milhões): %f \n", populacao1);
printf("Area (em km²): %f\n", area1);            
printf("Pib (em bilhões): %f \n", pib1);       
printf("Pontos Turísticos : %d \n", pontos_turisticos1);      
printf("Densidade Populacional: %f \n", densidadePopulacional1); 
printf("Per capita: %f\n", per_capita1);

printf("\n");

// Exibição da carta 2 ; 

printf ("Estado : %c \n", estado2);                  
printf ("Código :%s \n", codigo2);                 
printf("Cidade : %s \n", cidade2);      
printf("População (em milhões): %f \n", populacao2);
printf("Area (em km²): %f \n", area2);           
printf("Pib (em bilhões) \n", pib2);     
printf("Pontos Turísticos : %d \n", pontos_turisticos2);       
printf("Densidade Populacional : %f \n", densidadePopulacional2);
printf("Per capita : %f\n", per_capita2);             

printf("\n");

// Comparação entre as cartas;

if ( pib1 > pib2){

printf( "O PIB da cidade 1 é maior:  \n ");

} else {
 
printf(" O PIB da cidade 2 é maior \n");
}

printf(" A cidade que venceu foi : %s \n", cidade1, cidade2);

return 0;

}
