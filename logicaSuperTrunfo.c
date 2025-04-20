#include <stdio.h>
#include <unistd.h>
#include <locale.h>

 // Declaração de váriaveis!
   char estadoC1[40], estadoC2[40]; 
   char cidade01[40], cidade02[40]; 
   char codigoC1[4], codigoC2[4];
   unsigned long int populacaoC1, populacaoC2;
   int pontoTC1, pontoTC2; //Ponto turistico
   int menu, atributo1, atributo2; // escolha do usuario do menu, e do atributo para se comparar
   float areaC1, areaC2;
   float PIBC1, PIBC2;
   float densidadePopC1, densidadePopC2; // Densidade Populacional
   float PIBpCaptaC1, PIBpCaptaC2;
   float superpoderC1, superpoderC2;
   int resultado1, resultado2;
   
// Comparação de População
int compararPopulacao() {
  printf("\n----- População -----\n\n");
  printf("Carta 1 - %s (%s): %lu\n", cidade01, estadoC1, populacaoC1);
  printf("Carta 2 - %s (%s): %lu\n", cidade02, estadoC2, populacaoC2);

  int resultadoPop;
  if (populacaoC1 > populacaoC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoPop = 1;
  } else if (populacaoC1 < populacaoC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoPop = 2;
  } else {
      printf("Empate!\n");
      resultadoPop = 0;
  }

  sleep(3);
  return resultadoPop;
}

// Comparação de Área
int compararArea() {
  printf("\n----- Área -----\n\n");
  printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, areaC1);
  printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, areaC2);

  int resultadoArea;
  if (areaC1 > areaC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoArea = 1;
  } else if (areaC1 < areaC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoArea = 2;
  } else {
      printf("Empate!\n");
      resultadoArea = 0;
  }

  sleep(3);
  return resultadoArea;
}

// Comparação de PIB
int compararPIB() {
  printf("\n----- PIB -----\n\n");
  printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, PIBC1 / 1000000000);
  printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, PIBC2 / 1000000000);

  int resultadoPIB;
  if (PIBC1 > PIBC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoPIB = 1;
  } else if (PIBC1 < PIBC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoPIB = 2;
  } else {
      printf("Empate!\n");
      resultadoPIB = 0;
  }

  sleep(3);
  return resultadoPIB;
}

// Comparação de Pontos Turísticos
int compararPontosTuristicos() {
  printf("\n----- Pontos Turísticos -----\n\n");
  printf("Carta 1 - %s (%s): %d\n", cidade01, estadoC1, pontoTC1);
  printf("Carta 2 - %s (%s): %d\n", cidade02, estadoC2, pontoTC2);

  int resultadoPontos;
  if (pontoTC1 > pontoTC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoPontos = 1;
  } else if (pontoTC1 < pontoTC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoPontos = 2;
  } else {
      printf("Empate!\n");
      resultadoPontos = 0;
  }

  sleep(3);
  return resultadoPontos;
}

// Comparação de Densidade Populacional (menor é melhor)
int compararDensidadePop() {
  printf("\n----- Densidade Populacional -----\n\n");
  printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, densidadePopC1);
  printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, densidadePopC2);

  int resultadoDensidade;
  if (densidadePopC1 < densidadePopC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoDensidade = 1;
  } else if (densidadePopC1 > densidadePopC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoDensidade = 2;
  } else {
      printf("Empate!\n");
      resultadoDensidade = 0;
  }

  sleep(3);
  return resultadoDensidade;
}

// Comparação de PIB per Capita
int compararPIBpCapta() {
  printf("\n----- PIB per Capita -----\n\n");
  printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, PIBpCaptaC1);
  printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, PIBpCaptaC2);

  int resultadoPIBpc;
  if (PIBpCaptaC1 > PIBpCaptaC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoPIBpc = 1;
  } else if (PIBpCaptaC1 < PIBpCaptaC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoPIBpc = 2;
  } else {
      printf("Empate!\n");
      resultadoPIBpc = 0;
  }

  sleep(3);
  return resultadoPIBpc;
}

// Comparação de Super Poder
int compararSuperPoder() {
  printf("\n----- Super Poder -----\n\n");
  printf("Carta 1 - %s (%s): %.2f\n", cidade01, estadoC1, superpoderC1);
  printf("Carta 2 - %s (%s): %.2f\n", cidade02, estadoC2, superpoderC2);

  int resultadoSuper;
  if (superpoderC1 > superpoderC2) {
      printf("Resultado: Carta 1 venceu!\n");
      resultadoSuper = 1;
  } else if (superpoderC1 < superpoderC2) {
      printf("Resultado: Carta 2 venceu!\n");
      resultadoSuper = 2;
  } else {
      printf("Empate!\n");
      resultadoSuper = 0;
  }

  sleep(3);
  return resultadoSuper;
}

 

 int main() {
 
   setlocale(LC_ALL, "pt_BR.utf8"); //Para poder usar acentuação no projeto
   setlocale(LC_NUMERIC, "C"); //Para não pular o outro scanf quando usar ponto em números decimais
 
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
 
     printf("Carta 1 ( Sua carta )\n-------------------------------------\n");

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
 
     printf("Carta 2 ( Carta Adversária )\n-------------------------------------\n");

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
   printf("¬ As cartas são:\n\n");
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

   printf("Agora, escolha qual atributo as cartas vão ser comparadas\n");
   printf("-----------------------------------------------------------\n");
   printf(" 1. População\n 2. Àrea\n 3. PIB\n 4. Número de Pontos Turisticos\n 5. Densidade Demográfica\n 6. PIB per Capta\n  7. Super Poder!!\n\n");
   printf("Comparar o(a): ");
   scanf("%d", &atributo1);
   sleep(1);

   printf("\nAgora, escolha um outro atributo\n");
   printf("-----------------------------------------------------------\n");
   if (atributo1 != 1) printf(" 1. População\n");
   if (atributo1 != 2) printf(" 2. Àrea\n");
   if (atributo1 != 3) printf(" 3. PIB\n");
   if (atributo1 != 4) printf(" 4. Número de Pontos Turisticos\n");
   if (atributo1 != 5) printf(" 5. Densidade Demográfica\n");
   if (atributo1 != 6) printf(" 6. PIB per Capta\n");
   if (atributo1 != 7) printf(" 7. Super Poder!!\n");
   
   printf("\nComparar o(a): ");
   scanf("%d", &atributo2);
   sleep(1);
 

   switch (atributo1) {
   case 1:
   resultado1 = compararPopulacao() == 1 ? 1 : 0;  
   break;
 
   case 2:
   resultado1 = compararArea() == 1 ? 1 : 0;  
   break;
 
   case 3:
   resultado1 = compararPIB() == 1 ? 1 : 0;  
   break;
 
   case 4:
   resultado1 = compararPontosTuristicos() == 1 ? 1 : 0;  
   break;
 
   case 5:
   resultado1 = compararDensidadePop() == 1 ? 1 : 0;  
   break;
 
   case 6:
   resultado1 = compararPIBpCapta() == 1 ? 1 : 0;  
   break;
 
   case 7:
   resultado1 = compararSuperPoder() == 1 ? 1 : 0;  
   break;

   //caso o usuario digite um numero que não tá entre os atributos
   default:
    printf("Opção Inválida.\n\n");
   break;
   }

   
   switch (atributo2) {
   case 1:
   resultado2 = compararPopulacao() == 1 ? 1 : 0;  
   break;

   case 2:
   resultado2 = compararArea() == 1 ? 1 : 0;  
   break;

   case 3:
   resultado2 = compararPIB() == 1 ? 1 : 0;  
   break;

   case 4:
   resultado2 = compararPontosTuristicos() == 1 ? 1 : 0;  
   break;

   case 5:
   resultado2 = compararDensidadePop() == 1 ? 1 : 0;  
   break;

   case 6:
   resultado2 = compararPIBpCapta() == 1 ? 1 : 0;  
   break;

   case 7:
   resultado2 = compararSuperPoder() == 1 ? 1 : 0;  
   break;

   //caso o usuario digite um numero que não tá entre os atributos
   default:
    printf("Opção Inválida.\n\n");
   break;
   }

   sleep(1);
   printf("\n\n-------\n\n");

   // Vitória final
   if ((resultado1 == 1 || resultado2 == 1) && resultado1 != 2 && resultado2 != 2)
   {
    printf("Parabéns!! A sua carta venceu!!\n");
   } 
   else if ((resultado1 == 1 && resultado2 == 2) || 
           (resultado1 == 2 && resultado2 == 1) || 
           (resultado1 == 0 && resultado2 == 0)) 
    {
    printf("Empatou!\n");
    } 
   else 
   { 
    printf("Você perdeu! A carta 2 venceu.\n");
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