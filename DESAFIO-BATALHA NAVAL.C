#include <stdio.h>

int main(){

    
    char *Colunas[11] = {"  ", "A", "B", "C","D", "E", "F", "G", "H", "I", "J"};
    int linhas[10][11], j;
     
    printf("    TABULEIRO BATALHA NAVAL    \n\n");
    //IMPRIME NUMERO DAS COLUNAS                
    for (int i = 0; i < 11; i++)
       printf("%s ", Colunas[i] );  
   
   //IMPRIME TABULEIRO VAZIO    
    for (int i = 0; i < 10; i++ ) {
      linhas[i][0] = i + 1;   
      for(int j = 1; j < 11; j++ )
      {
        linhas[i][j] = 0;
      } 
    }
    
    //POSICIONA NAVIO 01 VERTICAL
    for (int i = 1; i < 4; i++)
      linhas[i][2] = 3;

    //POSICIONA NAVIO 02 HORIZONTAL
    for (int i= 3; i < 6; i++)
       linhas[5][i] = 3; 

    //POSICIONA NAVIO 03 DIAGONAL
    j = 3;     
    for (int i = 0; i < 3 ; i++) {
        linhas[i][j] = 3;
        j++;
    }

    //POSICIONA NAVIO 03 DIAGONAL INVERTIDA
    j = 9;     
    for (int i = 0; i < 3 ; i++) {
        linhas[i][j] = 3;
        j--;
    }          

    //POSICIONA TRIANGULO
    for (int i = 7; i < 11; i++)
      for (int j = 1 ; j < 6; j++) {
         if ( ( i == 7 ) && ( j == 3) ) { linhas[i][j] = 3; }
         else if ( ( i == 8 )  &&  ( j >= 2)  &&  ( j <= 4)  ) { linhas[i][j] = 3; }
         else if ( ( i == 9 )  &&  ( j >= 1)  &&  ( j <= 5)  ) { linhas[i][j] = 3; }
      }

    //POSICIONA CRUZ
    for (int i = 3; i < 6; i++)
      for (int j = 6 ; j < 11; j++) {
         if ( ( i == 3 ) && ( j == 8) ) { linhas[i][j] = 3; }
         else if ( ( i == 4 )  &&  ( j >= 6)  &&  ( j <= 10)  ) { linhas[i][j] = 3; }
         else if ( ( i == 5 )  &&  ( j == 8) ) { linhas[i][j] = 3; }
      }      

    //POSICIONA OCTAEDRO
    for (int i = 7; i < 10; i++)
      for (int j = 7 ; j < 10; j++) {
         if ( ( i == 7 ) && ( j == 8) ) { linhas[i][j] = 3; }
         else if ( ( i == 8 )  &&  ( j >= 6)  &&  ( j <= 9)  ) { linhas[i][j] = 3; }
         else if ( ( i == 9 )  &&  ( j == 8) ) { linhas[i][j] = 3; }
      }      

    printf("\n");
    // IMPRIME TABULEIRO 
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 11; j++) {
            if (i <  9 )
               printf(" %d", linhas[i][j]) ;
            else    
               printf("%d ", linhas[i][j]) ;
        }           
        printf("\n");  
    }

    return 0;
}
