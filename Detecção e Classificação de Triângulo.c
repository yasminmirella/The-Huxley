#include <stdio.h>

int main() {
  
  float a, b, c;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  
  if (((a+b)<=c) || ((a+c)<=b) || ((c+b)<=a)) {
    printf("-");
  }
   else if (a!=b&&b!=c&&c!=a)  {
    printf("ESCALENO");
  }
   else if ((a!=b&&b==c)||(b!=c&&c==a)||(c!=a&&a==b)) {
    printf("ISOSCELES");
  }
   else if ((a==b&&b==c)||(c==b&&b==a)) {
    printf("EQUILATERO");
  }
 
  return 0;
}