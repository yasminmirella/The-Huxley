#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
      int N;
      int mapa1[110][110], mapa2[110][110], mapa3[110][110], i, j;
      
      scanf("%d", &N);
      
      for(i=0; i<N; i++)
        for(j=0; j<N; j++)
          scanf("%d", &mapa1[i][j]);
      
          
      for(i=0; i<N; i++)
        for(j=0; j<N; j++)
          scanf("%d", &mapa2[i][j]);
          
      
      for(i=0; i<N; i++)
        for(j=0; j<N; j++)
          mapa3[i][j]= mapa1[i][j] + mapa2[i][j];
                 
      for(i=0; i<N; i++){
         for(j=0; j<N; j++)
           printf("%d ", mapa3[i][j]);
		   printf("\n");
       }     
       
	
	return 0;
}