#include <stdio.h>
int main(){
	int n=5;
	for(int i=1; i<=n; i++){
		for(int j=n; j>=n-i; j--){
			printf(" ");
		}
		for(int j=i; j<=n; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(int i=4; i>=1; i--){
		for(int j=n; j>=n-i; j--){
			printf(" ");
		}
		for(int j=i; j<=n; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
