#include <stdio.h>
int main(){
	int n=5;
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			if(i==1 || j==5 || j==i){
				printf("*");
				//printf("%d ",i);
				//printf("%d ",j );
			}else{
				printf(" ");
			}	
		} 
		printf("\n");
	}
return 0;
}
