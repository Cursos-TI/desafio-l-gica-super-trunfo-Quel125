// Aluna Queren Hapuque.
//Professor Sergio Cardoso.

#include <stdio.h>

int main (){

int opcao;
//Carta 1

char cidade1 [10] = "SaoPaulo";
float populacao1 = 11.45199 ; // em milhões
float area1 = 1.52120 ; // em km²
float pib1 = 828.980607 ; // em bilhões
int pontos_turisticos1 = 124 ;
float densidade_demografica1 = 7.528266; // hab/km²

//Carta 2
char cidade2[20] = "RiodeJaneiro";
float populacao2 = 6.211223; // em milhões
float area2 = 1.200329; //em km²
float pib2 = 359.640; // em bilhões
int pontos_turisticos2 = 98;
float densidade_demografica2 = 5.174601; //hab/km²

//Menu Interativo


printf("Escolha um atributo para ser comparado: \n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Pontos Turisticos\n");
printf("5.Densidade Demográfico\n");
scanf("%d", &opcao);

// Exibição da comparação

switch(opcao){
    
case 1:

if(populacao1 > populacao2){
    
printf("São Paulo, venceu!\n");

}else if(populacao2 > populacao1){
    
printf("Rio de Janeiro, venceu !\n");

} else {
 printf("Houve empate!\n");
 
}

break;

case 2:

if(area1 > area2){
    
printf("São Paulo venceu !\n");

}else if(area2 > area1){
    
printf("Rio de Janeiro venceu !\n");

}else {
printf("Houve empate\n");

}

break;

case 3:

if (pib1 > pib2){
    
printf("São Paulo venceu !\n");

}else if (pib2 > pib1){

printf("Rio de Janeiro venceu!\n");

}else {
    
printf("Houve empate!\n");

}

break;

case 4:

if(pontos_turisticos2 > pontos_turisticos1){
    
printf("Rio de Janeiro venceu!\n");

} else if (pontos_turisticos1 > pontos_turisticos2){
    
printf("São Paulo venceu!\n");

}else{
 
printf("Houve empate!\n");

}

break;

case 5:

if(densidade_demografica2 < densidade_demografica1){
    
printf("Rio de Janeiro venceu!\n");

}else if (densidade_demografica1 > densidade_demografica2){
    
printf("São Paulo perdeu!\n");

}else {
    
printf("Houve empate!\n");

}
break;

}

return 0;


}



