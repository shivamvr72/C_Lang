#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter 3 Side Of Triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	int x=0;
	do{
		if(a+b>c && a+c>b && b+c>a){
			//printf("It can Form Triangle\n");
			if(a==b && a==c){
				printf("Eqailateral Triangle\n");
			}else if(a==b || a==c || b==c){
				printf("Isoscel Triangle\n");
			}else{
				printf("Scalen Triangle\n");
			}
		}else{
			printf("Triangle cannot be formed\n");
		}
		
		printf("Do want to continue? yes=1/no=0:");
		scanf("%d", &x);
		if(x==1){
			printf("Enter three Side Of Triangle:");
			scanf("%d %d %d", &a, &b, &c);
		}else{
			break;
		}
	}while(x==1);
	return 0;
}
