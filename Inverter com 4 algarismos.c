#include <stdio.h>

int main() {

  int a, s, d, f, numb;

  scanf("%d", &numb);



  if(numb>=10)
  {
  a= numb % 10;
  numb=numb/10;
  s= numb % 10;
  numb=numb/10;
  d= numb % 10;
  numb=numb/10;
  f= numb % 10;
  numb=numb/10;
  

  
  }
  
  if ((a==0)&&(s==0)&&(d==0)) {
      printf("%d", f);
  }
  else if ((a==0)&&(s==0)) {
      printf("%d%d", d, f);
  }
  else if ((a==0)) {
      printf("%d%d%d", s, d, f);
  }
  else {
      printf("%d%d%d%d", a,s,d,f);
  }
  return 0;
}