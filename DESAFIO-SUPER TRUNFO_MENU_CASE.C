#include <stdio.h>

int main()
{
  // VARIAVEIS CARTA 01
  char sEstado01[1] ;
  char sCodCarta01[3] ;
  char sNomeCidade01[100] ;

  int iPopulacao01;
  int iPTuristicos01; 
  int iCarta1;
  int iComparacao;
    
  float fArea01;
  float fPib01;
  float fVlrDensPop1;
  float fVlrPibCap1;

  // VARIAVEIS CARTA 02
  char sEstado02[1];
  char sCodCarta02[3];
  char sNomeCidade02[100];

  int iPopulacao02;
  int iPTuristicos02; 
  int iCarta2;
 
  float fArea02;
  float fPib02;
  float fVlrDensPop2;
  float fVlrPibCap2;    

  //VARIAVEIS RESULTADOS NIVEM MESTRE
  int ResultPupul, ResultArea, ResultPib,
      ResultTurist,ResultDensid, ResultPibCap, ResultSuper;          

  float SomaSuperPoder1,SomaSuperPoder2;
  
  //INICIO  
  printf(" ****** SUPER TRUNFO. NIVEL NOVATO **** \n\n");
  printf("FAVOR INFORMAR OS DADOS DA 1°CARTA \n\n");
 
  printf("Digite a Letra do Estado: ");
  scanf("%s", &sEstado01);
     
  printf("Digite o Código da Carta: ");
  scanf("%s", &sCodCarta01);
    
  printf("Digite o nome da Cidade: ");
  scanf("%s", &sNomeCidade01);

  printf("Digite o População: ");
  scanf("%d",&iPopulacao01);

  printf("Digite a Aréa: ");
  scanf("%f", &fArea01);
    
  printf("Digite o PIB: ");
  scanf("%f", &fPib01);

  printf("Digite Quaitadade de pontos Turisticos: ");
  scanf("%d", &iPTuristicos01);  

  // CALCULO DENSIDADE E BIP CRT01 
  fVlrDensPop1 = (float) ( iPopulacao01 / fArea01 );
  fVlrPibCap1  = (float) ( fPib01 / iPopulacao01  );

  //IMPRIME CARTA 01 
  printf("\n            DADOS DA 1° CARTA \n\n");
    
  iCarta1 = 1;
  printf("Carta: %d:\n", iCarta1);
  printf("Estado: %s\n", sEstado01);
  printf("Código: %s\n", sCodCarta01);      
  printf("Nome da Cidade: %s\n", sNomeCidade01);      
  printf("POPULAÇÃO: %d \n", iPopulacao01);
  printf("Aréa: %.2f km²\n", fArea01);
  printf("PIB: %.2f Bilhões de Reais\n", fPib01);
  printf("Número de Pontos Turisticos: %d \n", iPTuristicos01);
  printf("Densidade Populacional: %.2f hab/km²\n", fVlrDensPop1);
  printf("PIB per Capita: %.2f\n", fVlrPibCap1);

  // LER CARTA 02 
  printf("\n\n   INFORME DOS DADOS DA 2° CARTA \n\n");   
  
  printf("Digite a Letra do Estado: ");
  scanf("%s", &sEstado02);
  
  printf("Digite o Código da Carta: ");
  scanf("%s", &sCodCarta02);
    
  printf("Digite o nome da Cidade: ");
  scanf("%s", &sNomeCidade02);

  printf("Digite o População: ");
  scanf("%d",&iPopulacao02);

  printf("Digite a Aréa: ");
  scanf("%f", &fArea02);
    
  printf("Digite o PIB: ");
  scanf("%f", &fPib02);

  printf("Digite Quaitadade de pontos Turisticos:");
  scanf("%d", &iPTuristicos02);

  // CALCULO DENSIDADE E BIP CRT01
  fVlrDensPop2 = (float) ( iPopulacao02 / fArea02);
  fVlrPibCap2  = (float) ( fPib02 / iPopulacao02 );

  //IMPRIME CARTA 02 
  printf("\n            DADOS DA 2° CARTA \n\n");
  
  iCarta2 = 2;
  printf("Carta: %d:\n", iCarta2);
  printf("Estado: %s\n", &sEstado02);
  printf("Código: %s\n", &sCodCarta02);      
  printf("Nome da Cidade: %s\n", &sNomeCidade02);     
  printf("POPULAÇÃO: %d \n", iPopulacao02);
  printf("Aréa: %.2f km²\n", fArea02);
  printf("PIB: %.2f Bilhões de Reais\n", fPib02);
  printf("Número de Pontos Turisticos: %d \n", iPTuristicos02);
  printf("Densidade Populacional: %.2f hab/km²\n", fVlrDensPop2);
  printf("PIB per Capita: %.2f\n", fVlrPibCap2);
 
  //COMPARAÇÕES - NIVEL MESTRE    
  ResultPupul  = iPopulacao01   > iPopulacao02;
  ResultArea   = fArea01        > fArea02;
  ResultPib    = fPib01         > fPib02;
  ResultTurist = iPTuristicos01 > iPTuristicos02;
  ResultDensid = fVlrDensPop1   > fVlrDensPop2;
  ResultPibCap = fVlrPibCap1    > fVlrPibCap2;

  SomaSuperPoder1 = iPopulacao01   + fArea01     + fPib01 + 
                    iPTuristicos01 + fVlrPibCap1 - fVlrDensPop1 ;
    
  SomaSuperPoder2 = iPopulacao02   + fArea02      + fPib02 + 
                    iPTuristicos02 + fVlrPibCap2 - fVlrDensPop2;

  ResultSuper = float(SomaSuperPoder1 > SomaSuperPoder2);

  printf("\n COMPARAÇÃO ENTRE CARTAS %d e %d \n\n", iCarta1, iCarta2);    

  printf("População: %d \n", ResultPupul);
  printf("Aréa: %d\n",ResultArea );
  printf("Pib: %d\n",ResultPib );
  printf("Pontos Turisticos: %d\n",ResultTurist );
  printf("Densidade Populacional: %d\n",ResultDensid );
  printf("Pib per Capita: %d\n",ResultPibCap );
  printf("Super Poder Carta 1: %d\n\n",  ResultSuper );
    
  //COMPARAR CARTA VENCEDORA
  printf("      Escolha qual opção a ser COMPARADA \n\n");

  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Número de Pontos Turísticos\n");
  printf("5.Densidade demográfica\n");
  printf("6.PIB per Capita\n");

  scanf("%d", &iComparacao);
  
  switch (iComparacao)
  {
  case 1:
  if (iPopulacao01 > iPopulacao02) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("População : %d\n", iPopulacao01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");    
  }else if (iPopulacao01 < iPopulacao02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("População: %d\n", iPopulacao02);
    printf(" *********** A carta 02 VENCEU. ************\n");    
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;
  
  case 2:
  if (fArea01 > fArea02) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("Área: %d\n", fArea01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fArea01 < fArea02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Área: %d\n", fArea02);
    printf(" *********** A carta 02 VENCEU. ************\n"); 
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  case 3:
  if (fPib01 > fPib02) {
    printf("Cidade: %s\n", sNomeCidade01);    
    printf("PIB: %d\n", fPib01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fPib01 < fPib02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("PIB: %d\n", fPib02);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  case 4:
  if (iPTuristicos01 > iPTuristicos02) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("Pontos Turísticos: %d\n", iPTuristicos01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (iPTuristicos01 < iPTuristicos02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Pontos Turísticos: %d\n", iPTuristicos02);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;
  
  case 5:
  if (fVlrDensPop1< fVlrDensPop2) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("demográfica: %d\n", fVlrDensPop1);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fVlrDensPop1 > fVlrDensPop2) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Desidade demográfica: %d\n", iPTuristicos02);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  case 6:
  if (fVlrPibCap1 > fVlrPibCap2) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("Pib per Capta: %d\n", fVlrPibCap1);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fVlrPibCap1 < fVlrPibCap2) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Pib per Capta: %d\n", fVlrPibCap2);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  default:
    printf("A Opção Digitada não é Válida.\n");    
    break;
  }

     
  return 0;   
}
