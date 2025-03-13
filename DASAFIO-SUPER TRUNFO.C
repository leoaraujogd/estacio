#include <stdio.h>

int main()
{
  // VARIAVEIS CARTA 01
  char sEstado01 [1];
  char sCodCarta01[5] ;
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
  char sEstado02[1] ;
  char sCodCarta02[5];
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
  
  int Resultado01, Resultado02, Atributo01, Atributo02 ;    

  float SomaSuperPoder1, SomaSuperPoder2 ,
        CRT01SomaAtrib01, CRT01SomaAtrib02,
        CRT02SomaAtrib01, CRT02SomaAtrib02,
        CRT01Total, CRT02Total;
  
  //INICIO  
  printf(" ****** DESAFIO - SUPER TRUNFO  **** \n\n");
  printf("INFORME OS DADOS DA CARTA 01 \n\n");
 
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

  printf("Digite Quantidade de pontos Turísticos: ");
  scanf("%d", &iPTuristicos01);  

  // CALCULO DENSIDADE E BIP CRT01 
  fVlrDensPop1 = (float) ( iPopulacao01 / fArea01 );
  fVlrPibCap1  = (float) ( fPib01 / iPopulacao01  );

  //IMPRIME CARTA 01 
  printf("\n         DADOS DA 1° CARTA \n\n");
    
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
  printf("\n\nINFORME OS DADOS DA CARTA 02 \n\n");   
  
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

  printf("Digite a Quantidade de pontos Turísticos:");
  scanf("%d", &iPTuristicos02);

  // CALCULO DENSIDADE E BIP CRT01
  fVlrDensPop2 = (float) ( iPopulacao02 / fArea02);
  fVlrPibCap2  = (float) ( fPib02 / iPopulacao02 );

  //IMPRIME CARTA 02 
  printf("\n            DADOS DA 2° CARTA \n\n");
  
  iCarta2 = 2;
  printf("Carta: %d:\n", iCarta2);
  printf("Estado: %s\n", sEstado02);
  printf("Código: %s\n", sCodCarta02);      
  printf("Nome da Cidade: %s\n", sNomeCidade02);     
  printf("POPULAÇÃO: %d \n", iPopulacao02);
  printf("Aréa: %.2f km²\n", fArea02);
  printf("PIB: %.2f Bilhões de Reais\n", fPib02);
  printf("Número de Pontos Turisticos: %d \n", iPTuristicos02);
  printf("Densidade Populacional: %.2f hab/km²\n", fVlrDensPop2);
  printf("PIB per Capita: %.2f\n", fVlrPibCap2);
 
  //COMPARAÇÕES - NIVEL MESTRE    
  printf("\n COMPARAÇÃO ENTRE CARTAS %d e %d \n\n", iCarta1, iCarta2);    
  
  /* SEM OPERADOR TERNARIO
  ResultPupul  = iPopulacao01   > iPopulacao02;
  ResultArea   = fArea01        > fArea02;
  ResultPib    = fPib01         > fPib02;
  ResultTurist = iPTuristicos01 > iPTuristicos02;
  ResultDensid = fVlrDensPop1   < fVlrDensPop2;
  ResultPibCap = fVlrPibCap1    > fVlrPibCap2;

  SomaSuperPoder1 = iPopulacao01   + fArea01     + fPib01 + 
                    iPTuristicos01 + fVlrPibCap1 - fVlrDensPop1 ;
    
  SomaSuperPoder2 = iPopulacao02   + fArea02      + fPib02 + 
                    iPTuristicos02 + fVlrPibCap2 - fVlrDensPop2;

  ResultSuper = float(SomaSuperPoder1 > SomaSuperPoder2);
  
  printf("População: %d \n", ResultPupul);  
  printf("Aréa: %d\n",ResultArea );
  printf("Pib: %d\n",ResultPib );
  printf("Pontos Turisticos: %d\n",ResultTurist );
  printf("Densidade Populacional: %d\n",ResultDensid );
  printf("Pib per Capita: %d\n",ResultPibCap );
  printf("Super Poder Carta 1: %d\n\n",  ResultSuper ); */
  
  //ROTINA COM OPERADORES TERNARIO 
  ResultPupul  = iPopulacao01   > iPopulacao02   ? printf("População Venceu.\n")         : printf("População PERDEU.\n");  
  ResultArea   = fArea01        > fArea02        ? printf("Aréa: VENCEU\n")              : printf("Aréa: PERDOU\n");
  ResultPib    = fPib01         > fPib02         ? printf("PIB: VENCEU\n" )              : printf("PIB: PERDEU\n");
  ResultTurist = iPTuristicos01 > iPTuristicos02 ? printf("Pontos Turisticos: VENCEU\n") : printf("Pontos Turisticos: PERDEU\n") ;
  ResultDensid = fVlrDensPop1   < fVlrDensPop2   ? printf("Densidade Populacional: VENCEU\n" ): printf("Densidade Populacional: PERDEU\n" );
  ResultPibCap = fVlrPibCap1    > fVlrPibCap2    ? printf("Pib per Capita: VENCEU\n" ): printf("Pib per Capita: PERDEU\n" );
    
  SomaSuperPoder1 = iPopulacao01   + fArea01     + fPib01 + 
                    iPTuristicos01 + fVlrPibCap1 - fVlrDensPop1 ;
    
  SomaSuperPoder2 = iPopulacao02   + fArea02      + fPib02 + 
                    iPTuristicos02 + fVlrPibCap2 - fVlrDensPop2;
  
  ResultSuper  = float(SomaSuperPoder1 > SomaSuperPoder2) ? 
               printf("Super Poder Carta 1: VENCEU\n\n") : 
               printf("Super Poder Carta 1: PERDEU\n\n");
    
  //COMPARAR CARTA VENCEDORA
  printf("Escolha qual opção a ser COMPARADA \n\n");

  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Número de Pontos Turísticos\n");
  printf("5.Densidade demográfica\n");
  printf("6.PIB per Capita\n\n");

  printf("Informe a opção: ");
  scanf("%d", &iComparacao);
  
  printf("\n * RESULTADO DA COMPARAÇÃO * \n\n");

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
    printf("Área: %.2f km²\n", fArea01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fArea01 < fArea02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Área: %.2f km²\n", fArea02);
    printf(" *********** A carta 02 VENCEU. ************\n"); 
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  case 3:
  if (fPib01 > fPib02) {
    printf("Cidade: %s\n", sNomeCidade01);    
    printf("PIB: %.2f Bilhões de Reais\n", fPib01);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fPib01 < fPib02) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("PIB: %.2f Bilhões de Reais\n", fPib02);
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
    printf("demográfica: %.2f hab/km²\n", fVlrDensPop1);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fVlrDensPop1 > fVlrDensPop2) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Desidade demográfica: %.2f hab/km²\n", iPTuristicos02);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  case 6:
  if (fVlrPibCap1 > fVlrPibCap2) {
    printf("Cidade: %s\n", sNomeCidade01);
    printf("Pib per Capta: %.2f\n", fVlrPibCap1);
    printf(" *********** A Carta 01 VENCEU. ***********\n");
  }else if (fVlrPibCap1 < fVlrPibCap2) { 
    printf("Cidade: %s\n", sNomeCidade02);
    printf("Pib per Capta: %.2f\n", fVlrPibCap2);
    printf(" *********** A carta 02 VENCEU. ************\n");
  }else {printf("  **** Houve um EMPATE !!!. ***\n"); }
  break;

  default:
    printf("A Opção Digitada não é Válida.\n");    
    break;
  }

  //COMPARAÇÃO ENTRE 2 ATRIBUTOS
  printf("\n  COMPARAÇÃO ENTRE 2 ATRITUDOS \n\n");

  printf("Escolha o 1º Atributo a ser comparado. \n\n");

  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Número de Pontos Turísticos\n");
  printf("5.Densidade demográfica\n");
  printf("6.PIB per Capita\n\n");

  printf("Informe a opção: ");
  scanf("%d", &Atributo01);

  switch (Atributo01)
  {
    case 1:
      Resultado01 = iPopulacao01 > iPopulacao02 ? 1 : 0; break;  
    case 2:
      Resultado01 = fArea01 > fArea02 ? 1 : 0; break;
    case 3:
      Resultado01 = fPib01 > fPib02 ? 1 : 0; break;
    case 4:
      Resultado01 = iPTuristicos01 > iPTuristicos02 ? 1 : 0; break;
    case 5:
      Resultado01 = fVlrDensPop1 < fVlrDensPop2 ? 1 : 0; break;
    case 6:
      Resultado01 = fVlrPibCap1 > fVlrPibCap2 ? 1 : 0; break;        
    default: printf ("Opção Inválida!\n");  break;
  }

  //SEGUNDA CARTA 
  printf("\nEscolha o 2º Atributo a ser comparado. \n\n");

  printf("1.População \n");
  printf("2.Área \n");
  printf("3.PIB \n");
  printf("4.Número de Pontos Turísticos\n");
  printf("5.Densidade demográfica\n");
  printf("6.PIB per Capita\n\n");

  printf("Informe a opção: ");
  scanf("%d", &Atributo02);

  if (Atributo01 == Atributo02) {
    printf("Você escolheu o mesmo Atributo!");

  } else {
    switch (Atributo02)
    {
    case 1:
      Resultado02 = iPopulacao01 > iPopulacao02 ? 1 : 0; break;  
    case 2:
      Resultado02 = fArea01 > fArea02 ? 1 : 0; break;
    case 3:
      Resultado02 = fPib01 > fPib02 ? 1 : 0; break;
    case 4:
      Resultado02 = iPTuristicos01 > iPTuristicos02 ? 1 : 0; break;
    case 5:
      Resultado02 = fVlrDensPop1 < fVlrDensPop2 ? 1 : 0; break;
    case 6:
      Resultado02 = fVlrPibCap1 > fVlrPibCap2 ? 1 : 0; break; 
    default:
      printf ("Opção Inválida!\n");  break;
    }

    // EXIBIÇÃO DO RESULTADO
    printf("\n     RESULTADO DA COMPARAÇÃO \n\n");

    printf("Cidade 01: %s\n", sNomeCidade01);
    printf("Cidade 02: %s\n", sNomeCidade02);
    
    switch (Atributo01) {
      case 1: 
        printf("População Carta 01: %d\n", iPopulacao01); 
        printf("População Carta 02: %d\n", iPopulacao01);
        CRT01SomaAtrib01 = iPopulacao01;
        CRT02SomaAtrib01 = iPopulacao02; 
      break;          
      case 2:
        printf("Área Carta 01: %.2f km²\n", fArea01);
        printf("Área Carta 02: %.2f km²\n", fArea02);  
        CRT01SomaAtrib01 = fArea01;
        CRT02SomaAtrib01 = fArea02;
      break;
      case 3: 
        printf("PIB Carta 01: %.2f Bilhões de Reais\n", fPib01); 
        printf("PIB Carta 02: %.2f Bilhões de Reais\n", fPib02);
        CRT01SomaAtrib01 = fPib01;
        CRT02SomaAtrib01 = fPib02;
      break;    
      case 4:
        printf("Pontos Turísticos Carta 01: %d\n", iPTuristicos01);  
        printf("Pontos Turísticos Carta 02: %d\n", iPTuristicos02);
        CRT01SomaAtrib01 = iPTuristicos01;
        CRT02SomaAtrib01 = iPTuristicos02;
      break;      
      case 5: 
        printf("demográfica Carta 01: %.2f hab/km²\n", fVlrDensPop1); 
        printf("demográfica Carta 02: %.2f hab/km²\n", fVlrDensPop2);
        CRT01SomaAtrib01 = fVlrDensPop1;
        CRT02SomaAtrib01 = fVlrDensPop2;
      break;
      case 6: 
        printf("Pib per Capta Carta 01: %.2f\n", fVlrPibCap1);
        printf("Pib per Capta Carta 02: %.2f\n", fVlrPibCap2);
        CRT01SomaAtrib01 = fVlrPibCap1;
        CRT02SomaAtrib01 = fVlrPibCap2; 
      break;   

      }
      switch (Atributo02) {
        case 1: 
          printf("População Carta 01: %d\n", iPopulacao01); 
          printf("População Carta 02: %d\n", iPopulacao02);
          CRT01SomaAtrib02 = iPopulacao01;
          CRT02SomaAtrib02 = iPopulacao02; 
        break;         
        case 2:
          printf("Área Carta 01: %.2f km²\n", fArea01);
          printf("Área Carta 02: %.2f km²\n", fArea02); 
          CRT01SomaAtrib02 = iPopulacao01;
          CRT02SomaAtrib02 = iPopulacao02;   
        break; 
        case 3: 
          printf("PIB Carta 01: %.2f Bilhões de Reais\n", fPib01); 
          printf("PIB Carta 02: %.2f Bilhões de Reais\n", fPib02);
          CRT01SomaAtrib02 = fPib01;
          CRT02SomaAtrib02 = fPib02;
        break;    
        case 4:
          printf("Pontos Turísticos  Carta 01: %d\n", iPTuristicos01);  
          printf("Pontos Turísticos  Carta 02: %d\n", iPTuristicos02);
          CRT01SomaAtrib02 = iPTuristicos01;
          CRT02SomaAtrib02 = iPTuristicos02;
        break;      
        case 5: 
          printf("demográfica Carta 01: %.2f hab/km²\n", fVlrDensPop1); 
          printf("demográfica Carta 02: %.2f hab/km²\n", fVlrDensPop2);
          CRT01SomaAtrib02 = fVlrDensPop1;
          CRT02SomaAtrib02 = fVlrDensPop2;
        break;
        case 6: 
          printf("Pib per Capta  Carta 01: %.2f\n", fVlrPibCap1);
          printf("Pib per Capta Carta 02: %.2f\n", fVlrPibCap2); 
          CRT01SomaAtrib02 = fPib01;
          CRT02SomaAtrib02 = fPib02;
        break;     
        }    

    if (Resultado01 && Resultado02) {
          printf("\n*** CARTA 01 VENCEU ***\n");} 
     else if (Resultado01 != Resultado02) {
        printf("\n * EMPATOU !  *\n"); } 
        else { 
          printf("Cidade: %s\n", sNomeCidade02);
          printf("\n *** CARTA 02 VENCEU *** \n"); }
    
    //COMPARAÇÃO ENTRE AS SOMA DAS CARTAS
    CRT01Total = CRT01SomaAtrib01 + CRT01SomaAtrib02;
    CRT02Total = CRT02SomaAtrib01 + CRT02SomaAtrib02;

    printf("\n RESULTADO DA SOMA DAS CARTAS \n\n");

    printf(" Soma da Carta 01: %.2f\n", CRT01Total );
    printf(" Soma da Carta 02: %.2f\n", CRT02Total );

    if (CRT01Total > CRT02Total) {
            printf("\n*** CARTA 01 VENCEU ***\n");} 
       else if (CRT01Total <  CRT02Total) {
        printf("\n *** CARTA 02 VENCEU *** \n"); } 
          else { 
            printf("\n * EMPATOU !  *\n");
          }
            
  } 

  return 0; 
}
