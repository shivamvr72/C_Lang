#include <stdio.h>
int main(){
	int n;
	printf("Enter Number To Print Table: ");
	scanf("%d", &n);
	for(int i=1; i<=10; i++){
		int x=i*n;
		printf("%d x %d = %d\n",n,i,x);
	}
	return 0;
}
