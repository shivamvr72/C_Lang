#include <stdio.h>
int main(){
	int x,y,m1,m2,sum,mul;
	printf("Enter pair of 4 digit num: ");
	scanf("%d %d", &x, &y);
	
	int i=0;
	mul=1;
	while(x>i){
		m1=x%10;
		printf("m1=%d\n", m1);
		m2=y%10;
		printf("m2=%d\n", m2);
		mul=m1*m2;
		printf("mul=%d\n", mul);
		sum+=mul;
		printf("sum of product=%d\n", sum);
		x/=10;
		y/=10;
	}
	
return 0;
}
