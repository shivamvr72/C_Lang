#include <stdio.h>
int main(){
	int n,m,x;
	printf("Enter Number: ");
	scanf("%d", &n);
	while(n!=-1){
		printf("n=%d\n",n);
		printf("m=%d\n",m);
		printf("x=%d\n",x);
		m=n;
		x=m;
		printf("Enter Number: ");
		scanf("%d", &n);	
	}
	if(m==x){
		printf("0\n");
	}else{
		printf("1\n");
	}
return 0;
}
