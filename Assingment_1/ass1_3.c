#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 Numbers For triplate: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a<=b<=c){
		printf("0\n");
	}else{
		printf("1\n");
	}
return 0;
}
