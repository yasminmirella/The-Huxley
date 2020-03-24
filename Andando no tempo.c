#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int A, B, C;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if((A==C)||(A==B)||(C==B)) {
    printf("S");

  }
  else if (((A+B)==C)||((B+C)==A) || ((C+A)==B)) {
    printf("S");
  }

  else {
    printf("N");
  }

  return 0;
}