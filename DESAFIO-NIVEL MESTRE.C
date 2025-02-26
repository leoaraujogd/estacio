#include <stdio.h>

int main()
{
    /* Variaveis Carta 01*/
    char sEstado01[1] ;
    char sCodCarta01[3] ;
    char sNomeCidade01[200] ;

    int  iPopulacao01;
    int  iPTuristicos01; 
    int  iCarta1;
    
    float fArea01;
    float fPib01;
    float fVlrDensPop1;
    float fVlrPibCap1;

    /* Variaveis Carta 02*/
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
   
    /* LER CARTA 01*/    
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

    /* CALCULO DENSIDADE E BIP CRT01 */
    fVlrDensPop1 = (float) ( iPopulacao01 / fArea01 );
    fVlrPibCap1  = (float) ( fPib01 / iPopulacao01  );

    /*IMPRIME CARTA 01*/ 
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

    /* LER CARTA 02 */  
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

    /* CALCULO DENSIDADE E BIP CRT01 */
    fVlrDensPop2 = (float) ( iPopulacao02 / fArea02);
    fVlrPibCap2  = (float) ( fPib02 / iPopulacao02  );

    /*IMPRIME CARTA 02 */
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
 
    return 0;   
}