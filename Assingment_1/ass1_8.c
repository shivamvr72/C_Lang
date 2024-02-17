#include <stdio.h>
int main(){
	int n,x,a,i=0,sum;
	printf("Enter a Number: ");
	scanf("%d", &n);
	while(n>0){
		x=n%10;
		n/=10;
		i++;
		printf("x=%d\n", x);
		printf("i=%d\n", i);
		if(i==1){
			a=x;
			printf("a=%d\n",a);
		}
		sum=a+x;
		printf("sum=%d\n",sum);
	}
	return 0;
}
