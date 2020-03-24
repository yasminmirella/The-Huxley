#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, C, S, E, a, b, c;
    scanf("%d %d", &N, &C);

    a=1;
    b=0;
    c=0;
    while (a<=N) {

        scanf("%d %d", &S, &E);
        c = (E-S) + c;
            a++;
        if (c>C){
            ++b;
        }
        
    }
    if (b<=0) {
        printf("N");
    }
    else {
        printf("S");
    }
  return 0;
}