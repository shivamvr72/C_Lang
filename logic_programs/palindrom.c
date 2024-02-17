#include <stdio.h>
int main(){
	int num, mod, cm=0, res;
	printf("Enter Number:");
	scanf("%d", &num);
	res=num;
	while(num>0){
		mod=num%10;
		printf("Mod=%d\n", mod);
		cm=(cm*10)+mod;
		printf("cm=%d\n", cm);
		num/=10;
		printf("nm=%d\n", num);
	}
	if(res==cm){
		printf("%d is palindrom number\n", res);
	}else{
		printf("%d is not palindrom number\n", res);
	}
return 0;
}
