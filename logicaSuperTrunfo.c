#include <stdio.h>
#include <unistd.h>
#include <locale.h>
 
 /* Os pacotes <unistd.h> e <locale.h> foram adicionados 
 para melhorar a estética e deixar o projeto mais legivel!*/
 
 int main() {
 
   setlocale(LC_ALL, "pt_BR.utf8"); //Para poder usar acentuação no projeto
   setlocale(LC_NUMERIC, "C"); //Para não pular o outro scanf quando usar ponto em números decimais
 
   // Declaração de váriaveis!
   char estadoC1[40], estadoC2[40]; 
   char cidade01[40], cidade02[40]; 
   char codigoC1[4], codigoC2[4];
   unsigned long int populacaoC1, populacaoC2;
   int pontoTC1, pontoTC2; //Ponto turistico
   int menu, atributo; // escolha do usuario do menu, e do atributo para se comparar
   float areaC1, areaC2;
   float PIBC1, PIBC2;
   float densidadePopC1, densidadePopC2; // Densidade Populacional
   float PIBpCaptaC1, PIBpCaptaC2;
   float superpoderC1, superpoderC2;
   
   printf(" ======= Bem Vindo ao Super Trunfo ======= \n\n");
   printf("          O que você quer fazer?\n\n");
   printf("   |1| Jogar     |2| Regras     |3| Sair\n\n");
   scanf("%d", &menu);

   switch (menu) {
   case 1: //Jogar

   printf("\n===================================================== \n\n");
   printf(" ¬ Primeiramente, Cadastre suas cartas para o jogo. \n\n\n");
   sleep(1);
 
   // Entrada de dados - Carta 1!
 
     printf("Carta 1\n-------------------------------------\n");

     printf("Escreva a sigla estado:\n");
     scanf(" %s", estadoC1);
 
     printf("Nome da cidade (não use espaço!):\n");
     scanf("%s", cidade01);
 
     printf("Código da carta (exemplo: A01, B03, C02...):\n");
     scanf("%s", codigoC1);
 
     printf("População (exemplo: 10000):\n");
     scanf("%lu", &populacaoC1);
 
     printf("Área em km² (exemplo: 1521.11):\n");
     scanf("%f", &areaC1);
 
     printf("PIB (exemplo: 699.28 bilhões):\n");
     scanf("%f" , &PIBC1);
 
     printf("Número de pontos turísticos:\n");
     scanf("%d", &pontoTC1);
 
   // Calculo das variáveis da Carta 1

       PIBC1 *= 1e9;
       densidadePopC1 = (float) populacaoC1 / areaC1;
       PIBpCaptaC1 = PIBC1 / (double) populacaoC1;
       superpoderC1 = (float) pontoTC1 + areaC1 + PIBC1 + PIBpCaptaC1 + (1.0 / densidadePopC1);
 
   printf("\n\n");
   sleep(1);
 
   // Entrada de dados - Carta 2
 
     printf("Carta 2\n-------------------------------------\n");

     printf("Escreva a sigla estado:\n");
     scanf(" %s", estadoC2);
 
     printf("Nome da cidade (não use espaço!):\n");
     scanf("%s", cidade02);
 
     printf("Código da carta (exemplo: A01, B03, C02...):\n");
     scanf("%s", codigoC2);
 
     printf("População (exemplo: 10000):\n");
     scanf("%lu", &populacaoC2);
 
     printf("Área em km² (exemplo: 1521.11):\n");
     scanf("%f", &areaC2);
 
     printf("PIB (exemplo: 699.28 bilhões):\n");
     scanf("%f", &PIBC2);
 
     printf("Número de pontos turísticos:\n");
     scanf("%d", &pontoTC2);
 
   // Calculo das variáveis da Carta 2
 
       PIBC2 *= 1e9;
       densidadePopC2 = (float) populacaoC2 / areaC2;
       PIBpCaptaC2 = PIBC2 / (double) populacaoC2;
       superpoderC2 = (float) pontoTC2 + areaC2 + PIBC2 + PIBpCaptaC2 + (1.0 / densidadePopC2);
 
   printf("\n\n");

   sleep(1); 
   printf("Pronto!\n\n");
  
   sleep(2);
   printf("¬ Suas cartas são:\n\n");
   sleep(1);
 
   // Saída de dados

   printf("--------------------------------\nCarta 1\n\n");
   printf("Estado: %s\n", estadoC1);
   printf("Nome da cidade: %s\n", cidade01);
   printf("Código da carta: %s\n", codigoC1);
   printf("População: %lu\n", populacaoC1);
   printf("Área: %.2f km²\n", areaC1);
   printf("PIB: %.2f bilhões de reais\n", PIBC1 / 1000000000);
   printf("Número de Pontos turísticos: %d\n", pontoTC1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidadePopC1);
   printf("PIB per Capita: %.2f reais\n\n", PIBpCaptaC1);
   printf("Super Poder: %.2f\n", superpoderC1);
   printf("--------------------------------\n\n");
 
   sleep(2);
 
   printf("--------------------------------\nCarta 2\n\n");
   printf("Estado: %s\n", estadoC2);
   printf("Nome da cidade: %s\n", cidade02);
   printf("Código da carta: %s\n", codigoC2);
   printf("População: %lu\n", populacaoC2);
   printf("Área: %.2f km²\n", areaC2);
   printf("PIB: %.2f bilhões de reais\n", PIBC2 / 1000000000);
   printf("Número de Pontos turísticos: %d\n", pontoTC2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidadePopC2);
   printf("PIB per Capita: %.2f reais\n\n", PIBpCaptaC2);
   printf("Super Poder: %.2f\n", superpoderC2);
   printf("--------------------------------\n\n\n\n");
 
   sleep(3);

//Escolha do Atributo

   printf("Agora, escolha qual atributo suas cartas vão ser comparadas\n");
   printf("-----------------------------------------------------------\n");
   printf(" 1. População\n 2. Àrea\n 3. PIB\n 4. Número de Pontos Turisticos\n 5. Densidade Demográfica\n 6. PIB per Capta\n  7. Super Poder!!\n\n");
   printf("Comparar o(a): ");
   scanf("%d", &atributo);
   sleep(1);


 

   switch (atributo) {
   case 1:
 // Primeira comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n====== Comparação de Atributos: População =====\n\n");
   printf("Carta 1 - %s (%s): %lu\n", cidade01, estadoC1, populacaoC1);
   printf("Carta 2 - %s (%s): %lu\n", cidade02, estadoC2, populacaoC2);
   printf("\n--------------------------------\n\n");
 
     if (populacaoC1 > populacaoC2)
     {
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
     }
    else if (populacaoC2 > populacaoC1) 
     {
       printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
     }
    else 
    {
      printf("Resultado: Empate! nenhuma carta venceu!\n");
    }
     printf("\n===============================================\n\n");
 
     sleep(3);
     break;
 
     case 2:
 // Segunda Comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: Àrea =====\n\n");
   printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, areaC1);
   printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, areaC2);
   printf("\n--------------------------------\n\n");
 
     if (areaC1 > areaC2)
     {
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
     }
    else if (areaC2 > areaC1) 
     {
       printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
     }
    else 
    {
      printf("Resultado: Empate! nenhuma carta venceu!\n");
     }
     printf("\n==========================================\n\n");
 
     sleep(3);
     break;
 
     case 3:
 // Terceira comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: PIB =====\n\n");
   printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, PIBC1 / 1000000000);
   printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, PIBC2 / 1000000000);
   printf("\n--------------------------------\n\n");
 
     if (PIBC1 > PIBC2)
     {
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
     }
    else if (PIBC2 > PIBC1) 
     {
       printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
     }
    else 
    {
      printf("Resultado: Empate! nenhuma carta venceu!\n");
     }
     printf("\n=========================================\n\n");
 
     sleep(3);
     break;
 
     case 4:
 // Quarta comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: Número de Pontos turísticos =====\n\n");
   printf("Carta 1 - %s (%s): %d\n", cidade01, estadoC1, pontoTC1);
   printf("Carta 2 - %s (%s): %d\n", cidade02, estadoC2, pontoTC2);
   printf("\n--------------------------------\n\n");
 
     if (pontoTC1 > pontoTC2)
     {
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
     }
    else if (pontoTC2 > pontoTC1) 
     {
       printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
     }
    else 
    {
      printf("Resultado: Empate! nenhuma carta venceu!\n");
     }
     printf("\n=================================================================\n\n");
 
     sleep(3);
     break;
 
     case 5:
 // Quinta comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: Densidade Populacional =====\n\n");
   printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, densidadePopC1);
   printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, densidadePopC2);
   printf("\n--------------------------------\n\n");
 
    if (densidadePopC1 < densidadePopC2)
     {
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
     }
    else if (densidadePopC2 < densidadePopC1) 
     {
       printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
     }
    else 
    {
      printf("Resultado: Empate! nenhuma carta venceu!\n");
    }
     printf("\n============================================================\n\n");
 
     sleep(3);
     break;
 
     case 6:
 // Sexta comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: PIB per Capta =====\n\n");
   printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, PIBpCaptaC1);
   printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, PIBpCaptaC2);
   printf("\n--------------------------------\n\n");
 
   if (PIBpCaptaC1 > PIBpCaptaC2)
   {
     printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
   } 
   else if (PIBpCaptaC2 > PIBpCaptaC1)
   {
     printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
   }
   else
   {
    printf("Resultado: Empate! nenhuma carta venceu!\n");
   }
   printf("\n===================================================\n\n");
   
   sleep(3);
   break;
 
   case 7:
 // Sétima comparação
   printf("\nComparação das Cartas!");
   sleep(1);
   printf("\n\n\n====== Comparação de Atributos: Super Poder!!! =====\n\n");
   printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, superpoderC1);
   printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, superpoderC2);
   printf("\n--------------------------------\n\n");
 
   if (superpoderC1 > superpoderC2)
   {
     printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);
   }
   else if (superpoderC2 > superpoderC1)
   {
     printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);
   }
   else
   {
     printf("Resultado: Empate! nenhuma carta venceu!\n");
   }
   printf("\n====================================================\n\n");
 
   sleep(3);


   break; // do case 7 Atributo

   //caso o usuario digite um numero que não tá entre os atributos
   default:
    printf("Opção Inválida.\n\n");
   break;
   }

   printf("\n\nFim de Jogo!!\n\n\n");
   break; //do case 1 Jogar

   case 2:
    printf(" =========  Regras do Super Trunfo  =========\n\n\n");
    sleep(1);
    printf("               Sobre o jogo \n\n");
    printf("Super Trunfo é um jogo de cartas onde os jogadores comparam\n");
    printf("atributos de diferentes elementos para vencer rodadas.\n");
    printf("Neste caso, o jogo é baseado em cidades de um estado,\n");
    printf("onde são comparados atributos como PIB, população,\n");
    printf("densidade demográfica, entre outros.\n\n");
    sleep(1);
    printf("            Cadastro das Cartas \n\n");
    printf("No início do jogo, você cadastra duas cartas para comparação,\n");
    printf("inserindo informações como nome da cidade e sigla do estado.\n");
    printf("Após o cadastro, você pode visualizar rapidamente suas cartas\n");
    printf("antes de escolher o atributo para comparar.\n\n");
    sleep(1);
    printf("             Atributos das Cartas \n\n");
    printf("Cada cidade possui os seguintes atributos para comparação:\n");
    printf("- População\n");
    printf("- Área\n");
    printf("- PIB (Produto Interno Bruto)\n");
    printf("- PIB per Capita\n");
    printf("- Número de Pontos Turísticos\n");
    printf("- Densidade Demográfica\n");
    printf("- Super Poder (soma de todos os atributos, exceto densidade)\n\n");
    sleep(1);
    printf("           Comparação das Cartas \n\n");
    printf("A carta com o valor mais alto vence, exceto no caso\n");
    printf("da densidade demográfica, onde o menor valor é o vencedor.\n\n");
   break;

   case 3:
    sleep(1);
    printf("\n\n ============  Super Trunfo  ============\n\n\n");
    printf("             Saindo do jogo...\n\n\n");
    sleep(2); // falsa sensação de carregamento
   break;

   //caso o usuario digite um numero que não tá no menu
   default:
    printf("\nOpção Inválida.\n\n");
   break;
  }
 
   /* Pelo visto, alguns resultados estão sendo arredondados por conta do uso  
    do float em vez de double. Porém, como o uso do float é um dos requisitos  
    do desafio, as variáveis não serão alteradas para corrigir essa ocorrência. */
 
   return 0;
 
}