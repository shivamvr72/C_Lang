#include <stdio.h>
int main(){
	int a,mod,x;
	char no;
	printf("Enter A Number : ");
	scanf("%d", &a);
	
	while(a>0){
		mod=a%10;
		a/=10;
		printf("Binary%d\n",mod);
		if(mod!=0 || mod!=1){
			break;
			x=0;
		}
		if(mod==0 || mod==1){
			printf("Binary\n");
		}else if(mod!=0 || mod!=1){
			printf("other than Binary\n");
		}
	}
	return 0;
	
}
