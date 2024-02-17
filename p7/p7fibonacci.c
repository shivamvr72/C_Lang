#include <stdio.h>
int main(){
	int a=0,b=1,c=0,x;
	printf("Enter Number : ");
	scanf("%d", &x);
	for(int i=1;i<=x;i++){
		printf("%d ",c);
		a=c+b;
		c=b;
		b=a;
	}
	return 0;
}
