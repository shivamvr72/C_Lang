#include <stdio.h>
int main(){
	int x,y;
	printf("Enter Number: ");
	scanf("%d", &x);
	y=0;
	do{
		y=(y*10)+(x%10);
		x/=10;
	}while(x==0);
	printf("%d", y);
	return 0;
}
