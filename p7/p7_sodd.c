#include <stdio.h>
int main(){
	int n,x;
	printf("Enter Number for Odd sum:");
	scanf("%d", &n);
	for(int i=1; i<=n ; i++){
		if(i%2==1){
			x+=i;
		}
	}
	printf("%d\n", x);
	return 0;
}
