#include <stdio.h>
int main(){
	int num[10];
	
	for(int i=0; i<=5; i++){
		printf("Enter No[%d] : ", i);
		scanf("%d", &num[i]);
	}
	//for smallest
	int temp = num[0];
	int large = num[0];
	//printf("%d\n",temp);
	for(int i=0; i<=5; i++){
		if(temp>num[i]){
			temp=num[i];
			//printf("temp %d\n",temp);
			}
		if(large<num[i]){
			large=num[i];
		}
	}
	printf("smalleset element : %d \n",temp);
	printf("largest element : %d \n", large);
	

	
return 0;
}
