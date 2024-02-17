#include <stdio.h>
int main(){
	int n,t;
	printf("Enter Number To Print Table: ");
	scanf("%d", &n);
	for(int i=1;i<=10;i++){
		t=n*i;
		printf("%d x %d = %d\n",n,i,t);
	}
	return 0;
}
