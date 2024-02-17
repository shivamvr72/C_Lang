#include <stdio.h>
int main(){
	int n,c=0,m=0,x=0;
	do{
		printf("Enter Number : ");
		scanf("%d", &n);
		if(m!=n && m<n && x<=m){
			c++;
		}else if(m!=n && m>n && m<=x){
			c++;
		}
		printf("n=%d\n", n);	
		printf("x=%d\n", x);	
		printf("m=%d\n", m);	
		printf("c=%d\n", c);
		x=m;
		m=n;	
		
	}while(n!=-1);
	printf("%d\n", (c));		
	return 0;	 
}
