#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

int dia0, mes0, ano0, dia1, mes1, ano1, dias0=0, dias1=0, dias;
int i=0;

scanf("%d/%d/%d\n%d/%d/%d", &dia0, &mes0, &ano0, &dia1, &mes1, &ano1);
  
 while(i < ano0){
	if(i % 400 == 0){
        dias0= dias0 + 366;
    }
    else if((i % 4 == 0) && (i % 100) != 0){
		dias0= dias0 + 366;
	}
	else{
	        dias0= dias0 + 365;
	}
    i++;
}
  
i=1;
while(i < mes0){
       if( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
		dias0= dias0 + 31;
	}
	else if( i == 2){
        if(ano0 % 400 == 0){
        dias0= dias0 + 29;
        }
		if((ano0 % 4 == 0) && (ano0 % 100) != 0){
		        dias0= dias0 + 29;
		}
		else{
			dias0= dias0 + 28;
		}
	}
        else if( i == 4 || i == 6 || i == 9 || i == 11){
		dias0= dias0 + 30;
	}
    i++;
}
dias0= dias0 + dia0;
 
i=0;
while(i < ano1){
    if(i % 400 ==0){
        dias1= dias1 + 366;
    }
	else if((i % 4 == 0) && (i % 100) != 0){
		dias1= dias1 + 366;
	}
	else{
		dias1= dias1 + 365;
	}
    i++;
  }
  i=1;
while(i < mes1){
	if( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
		dias1= dias1 + 31;
	}
	else if( i == 2){
        if (ano1 % 400 == 0){
            dias1= dias1 + 29;
        }
		if((ano1 % 4 == 0) && (ano1 % 100) != 0){
			dias1= dias1 + 29;
		}
		else{
			dias1= dias1 + 28;
		}
	}
	else if( i == 4 || i == 6 || i == 9 || i == 11){
		dias1= dias1 + 30;
	}
    i++;
}
dias1= dias1 + dia1;

  dias = dias1 - dias0;
  
  printf("%d", dias);

return 0;
}