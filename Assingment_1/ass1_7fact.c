#include <stdio.h>

int main(){
	int a,n;
	printf("Enter A Number For Factorial: ");
	scanf("%d", &n);
	a=1;
	if(n<0){
		printf("Cannot Find Factorial Of Negative\n");
	}else{
		while(n>0){
			a*=n;	
			n--;
		}
		printf("Factorial :%d\n",a);
	}
	return 0;
}
