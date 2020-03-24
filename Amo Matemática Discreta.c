#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int	p1,p2,p3,l,i,r,c=0,a,mev=0,mav=0;
	scanf("%d %d %d %d %d", &p1, &p2, &p3, &l, &r);

	for(i=l;i<=r;i=i+1){
		a=i;
		if(a%p1 == 0 || a%p2 == 0 || a%p3 == 0){
			while(a > 1){
				if(a%p1 == 0){
					a = a/p1;
				}
				else if(a%p2 == 0){
					a = a/p2;
				}
				else if(a%p3 == 0){
					a = a/p3;
				}
				else{
					break;
				}
				if(a == 1){
					c=c+1;
					mav = i;
					if(c == 1) mev = i;
				    }
				}
			}
		}
		printf("%d %d %d", c, mev, mav);
    return 0;
	}