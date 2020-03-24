#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v[3005]={0}, N, i=0, j, w[3005]={0}, temp[3005]={0}, jolly=0, aux;

    while(scanf("%d", &N)!=EOF){
        jolly=0;
    if (N==1){
        printf("Jolly\n");
    }
    else{
        for (i=0; i<N; i++){
            scanf("%d", &v[i]);
    }

    for(j=0;j<N-1; j++){
        w[j]=abs(v[j]-v[j+1]);
    }
    for(i=0;i<N-1;i++){
        for(aux=i+1; aux<N-1; aux++){
            if(w[aux]>w[i]){
            temp[aux]=w[i];
            w[i]=w[aux];
            w[aux]=temp[aux];
            }
        }
    }
    for(i=0;i<N-2;i++){
        if(w[i]-w[i+1]!=1){
            jolly=1;
            break;
        }
        else{
            jolly=0;
        }
    }
    if(jolly!=0){
        printf("Not jolly\n");
    }
    else{
        printf("Jolly\n");
    }
    for(i=0; i<N; i++){
        v[i]=0;
    }
    }
    }
  return 0;
}