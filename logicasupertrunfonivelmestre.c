#include <stdio.h>

int main()
{

int opcao1, opcao2;
int i =1;
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


// Menu interativo

printf("Escolha o primeiro atributo  para ser comparado: \n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Pontos Turisticos\n");
printf("5.Densidade Demográfico\n");
scanf("%d", &opcao1);

printf("Escolha o segundo atributo  para ser comparado(diferente do primeiro): \n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Pontos Turisticos\n");
printf("5.Densidade Demográfico\n");
scanf("%d", &opcao2);

if(opcao2== opcao1){

printf("Por favor, esocolha um atributo diferente do primeiro!\n");
scanf("%d", &opcao2);

}


printf("Comparação do primeiro atributo\n ", opcao1);

switch(opcao1){
    
case 1:

printf("%s\n", populacao1 > populacao2 ? "São Paulo venceu em população!" : 
       populacao2> populacao1 ? "Rio de Janeiro venceu em população!" : "Houve empate em população!");
       
break;

case 2:

printf("%s\n", area1 > area2 ? "São Paulo venceu em area!": area2 > area1 ? "Rio de Janeiro venceu em area!" :
       "Houve um empate em area!");

break;

case 3:

printf("%s\n", pib1 > pib2 ? "São Paulo venceu em PIB!": pib2 > pib1 ? "Rio de Janeiro venceu em PIB!" :
       "Houve um empate em PIB!");
       
break;

case 4:

printf("%s\n", pontos_turisticos1 > pontos_turisticos2 ? "São Paulo venceu em pontos turisticos!" :
        pontos_turisticos2 > pontos_turisticos1 ? "Rio de Janeiro venceu em pontos turisticos!": "Houve empate !");

break;

case 5:

printf ("%s\n",densidade_demografica1 > densidade_demografica2 ? "Rio de Janeiro venceu em Densidade Demográfica!" :
       densidade_demografica2 < densidade_demografica1 ? "São Paulo perdeu em Densidade Demográfica!" : "Houve empate!");

break;
}

printf("Comparação do segundo atributo\n");

switch(opcao2){
    
case 1:

printf("%s\n", populacao1 > populacao2 ? "São Paulo venceu em população!" : 
       populacao2> populacao1 ? "Rio de Janeiro venceu em população!" : "Houve empate em população!");
       
break;

case 2:

printf("%s\n", area1 > area2 ? "São Paulo venceu em area!": area2 > area1 ? "Rio de Janeiro venceu em area!" :
       "Houve um empate em area!");

break;

case 3:

printf("%s\n", pib1 > pib2 ? "São Paulo venceu em PIB!": pib2 > pib1 ? "Rio de Janeiro venceu em PIB!" :
       "Houve um empate em PIB!");
       
break;

case 4:

printf("%s\n", pontos_turisticos1 > pontos_turisticos2 ? "São Paulo venceu pontos turisticos!" :
      pontos_turisticos2 > pontos_turisticos1 ? "Rio de Janeiro venceu em pontos turisticos!": "Houve empate !");

break;

case 5:

printf ("%s\n",densidade_demografica1 > densidade_demografica2 ? "Rio de Janeiro venceu em Densidade Demográfica!" :
       densidade_demografica2 < densidade_demografica1 ? "São Paulo perdeu em Densidade Demográfica!" : "Houve empate!");

break;
}


return 0;



}