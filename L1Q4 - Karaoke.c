#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float ideal, numDeAmigos, numDePessoas, t1, t2, t3, v1, v2, v3, vergonha1,vergonha2, vergonha3;   
    
    scanf("%f %f", &numDePessoas, &numDeAmigos);
    
    scanf("%f %f", &t1, &v1);
    scanf("%f %f", &t2, &v2);
    scanf("%f %f", &t3, &v3);
    
    
    ideal = sqrt(numDePessoas);
    
    vergonha1 = (t1*t1)*v1;
    vergonha2 = (t2*t2)*v2;
    vergonha3 = (t3*t3)*v3;
    
    if(ideal > numDeAmigos){
        
        printf("N�o cantarei, desculpa.");
        
    }else{
        if(vergonha1 < vergonha2 && vergonha1 < vergonha3){
            
            printf("Voc� deve cantar a m�sica 1, boa sorte!");
            
        }else if(vergonha2 < vergonha1 && vergonha2 < vergonha3){
            
            printf("Voc� deve cantar a m�sica 2, boa sorte!");
            
        }else if(vergonha3 < vergonha2 && vergonha3 < vergonha1){
            
            printf("Voc� deve cantar a m�sica 3, boa sorte!");
            
        }else if (vergonha1 == vergonha2 || vergonha1 == vergonha3){
            
            printf("Voc� deve cantar a m�sica 1, boa sorte!");
            
        }else if (vergonha3 == vergonha2){
            
            printf("Voc� deve cantar a m�sica 2, boa sorte!");
            
        }
    }
    
	return 0;
}