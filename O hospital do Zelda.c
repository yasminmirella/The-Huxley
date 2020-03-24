#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N, M, i, j, k, Tinicial, Tfinal, Tlimite=0, TpacienteC, Npaciente, a=0, b=0, resultado=0; // Tinical e Tinical � em rela��o ao tempo das consultas
    int numpacientes[100000], pacientesNA[100000]; 
    
    scanf("%d %d", &N, &M);
    
    for(i=0; i<100000; i++){
        numpacientes[i]=0;
    }
    for(i=0; i<N; i++){
        scanf("%d %d", &Tinicial, &Tfinal);
        for(j=Tinicial; j<Tfinal; j++){
            numpacientes[j]=1;
        }
    
        if(Tlimite < Tfinal){
            Tlimite=Tfinal;
        }
    }
    
    for(i=0; i<M; i++){
        scanf("%d", &TpacienteC);
        pacientesNA[i]= TpacienteC;
    }
    for(i=0; i<M-1; i++){
        for(j=i+1; j< M; j++){
            if(pacientesNA[i]> pacientesNA[j]){
               Npaciente=pacientesNA[i];
               pacientesNA[i]=pacientesNA[j];
               pacientesNA[j]=Npaciente;
            }
        }
    }
    for(i=0; i<Tlimite; i++){
        if(numpacientes[i]==0){
            a++;       
        }else{
            a=0;
        }
        for(j=b; j<M; j++){
            if(a == pacientesNA[j]){
                if(pacientesNA[j]!=0){
                    if(Tlimite<=100000){
                        for(k=i-pacientesNA[j]; k<i; k++){
                            numpacientes[k]=1;
                        }
                        resultado++;
                        a=0;
                        b++;
                    }else{
                        b++;
                    }
                }
            }
        }
    }
    printf("%d", resultado);
	return 0;
}