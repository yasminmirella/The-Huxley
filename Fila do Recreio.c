#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
  int c, a, b=0, i, j;
  int aux[1010], v[1010], temp[1010];

  scanf("%d", &c);

  while(c>0){
    scanf("%d", &a);
    for(i=0; i<a; i++){
      aux[i]=0;
      temp[i]=0;
      scanf("%d", &v[i]);
    }  
    for(i=0; i<a; i++){
      temp[i]=v[i];
    }
    for(i=0; i<a; i++){
      for(j=i+1; j<a; j++){
        if(temp[j]>temp[i]){
          aux[i]=temp[j];
          temp[j]=temp[i];
          temp[i]=aux[i];
        }
      }
    }
    for(i=0; i<a; i++){
      if(v[i]==temp[i]){
        b++;
      }
    }
    printf("%d\n", b);
    c--;
    b=0;
    for(i=0; i<a; i++){
      v[i]=0;
    }
  }
  return 0;
}