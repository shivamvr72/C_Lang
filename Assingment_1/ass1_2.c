#include <stdio.h>
int main(){
	int m,n,x;
	printf("Enter M & N Number: ");
	scanf("%d %d", &m, &n);
	if(m%n==0){
		x=m/n;
		printf("%d\n", x);
	}else{
		printf("0\n");
	}


return 0;
}
