#include <stdio.h>
int main(){
	int nm,di,temp,count,res,di1;
	printf("Enter Number: ");
	scanf("%d", &nm);
	int pow=0;
	count =0;
	temp = nm;
	res = nm;
	
	while(nm>0){
		di=nm%10;
		nm/=10;
		count++;
		pow+=di*di*di;
		if(count==4){
			pow=0;
			while(res>0){
				di1=res%10;
				pow+=di1*di1*di1*di1;
				res/=10;
			}
			
		}
	}
	printf("count=%d\n", count);
	if(pow==temp){
		printf("%d is Armstrong number\n", temp);
	}else{
		printf("%d Ordinary Number\n", temp);
	}
	
	
return 0;
}
