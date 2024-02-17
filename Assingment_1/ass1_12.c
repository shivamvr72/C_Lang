#include <stdio.h>
int main(){
	float x,y,z;
	printf("Enter Number1: ");
	scanf("%f", &x);
	printf("Enter Number2: ");
	scanf("%f", &y);
	if(y>0){
		while(y>0){
			z+=x;
			y--;
		}
	}else if(y<=0 && x>=0){
		while(x>0){
			z+=y;
			x--;
		}
	}else if(y<=0 && x<=0){
		while(x<0){
			z-=y;
			x++;
		}
	}
	printf("%.2f\n", z);
	return 0;
}
