#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    char texto[60000];
    int i=0, tam;
    
    scanf(" %[^\n]", texto);
    
    tam = strlen(texto);
    
    while(i<tam){
        
        if(texto[i]>=65 && texto[i]<=90){
            texto[i]+=32;
        }
        
        if(i==0){
            if(texto[i]>=97 && texto[i]<=122){
                texto[i]-=32;
            }
        }
        
        if(texto[i-2]=='.' && texto[i-1]==' '){
             if(texto[i]>=97 && texto[i]<=122){
                texto[i]-=32;
            }
        }
        
        if(texto[i]=='4'){
            if(i==0 || (texto[i-2]== '.' && texto[i-1]==' ')){
                texto[i]='A';
            }else{
            texto[i]='a';
            }
        }
        else if(texto[i]=='5'){
            if(i==0 || (texto[i-2]=='.' && texto[i-1]==' ')){
                texto[i]='E';
            }else{
            texto[i]='e';
            }
        }
        else if(texto[i]=='1'){
            if(i==0 || (texto[i-2]=='.' && texto[i-1]==' ')){
                texto[i]='I';
            }else{
            texto[i]='i';
            }
        }
        else if(texto[i]=='0'){
            if(i==0 || (texto[i-2]=='.' && texto[i-1]==' ')){
                texto[i]='O';
            }else{
            texto[i]='o';
            }
        }
        else if(texto[i]=='2'){
            if(i==0 || (texto[i-2]=='.' && texto[i-1]==' ')){
                texto[i]='U';
            }else{
            texto[i]='u';
            }
        }
        
        i++;
    }
    printf(" %s", texto);
    
    
	return 0;
}