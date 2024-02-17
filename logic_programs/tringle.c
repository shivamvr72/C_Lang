#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter A Three Sides: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && a==c){
		printf("Triangle is Equiletral\n");
	}else if(a==b || a==c || b==c){
		printf("Triangle is Isoscels\n");
	}else{
		printf("Tringle is Scalen\n");
	}
return 0;
}
