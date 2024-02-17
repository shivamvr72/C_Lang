#include <stdio.h>
int main(){
	int c=0,c1=3,n=5;
	for(int i=n; i>=1; i--){
		for(int j=5;j>=i;j--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("%d ",j+c);
		}
		c++;
		printf("\n");
	}
	for(int i=2; i<=5; i++){
		for(int j=5;j>=i;j--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("%d ",c1+j);
		}
		c1--;
		printf("\n");
	}
	return 0;
}
