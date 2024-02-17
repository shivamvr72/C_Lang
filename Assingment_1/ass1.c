#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 Numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b || b==c || a==c){
		printf("0");
	}else{
		printf("1");
	}
}
