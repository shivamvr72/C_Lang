#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 Sides Of Triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	
	while(a>0){
		if(a+b>c && b+c>a && a+c>b){
			printf("Triangle can be formed\n");
			if(a==b && b==c){
				printf("Triangle is Equilateral\n");
			}else if(a==b || b==c || a==c){
				printf("Triangle is Isoscel\n");
			}else if(a<b && a<c){
				printf("Triangle is right angle\n");
			}else{
				printf("Triangle is Scalen\n");
			}
		}else{
			printf("Tringle cannot be formed\n");
		}
		printf("Enter 3 Sides Of Triangle\Enter 3 '0' to terminate: ");
		scanf("%d %d %d", &a, &b, &c);	
	}
return 0;
}
