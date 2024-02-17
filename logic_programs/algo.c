#include <stdio.h>

int main(){
	float m,s,f;
	printf("Enter A Number: ");
	scanf("%f", &m);
	if(m<0){
		printf("Negative Value is not valid input\n");
	}else{	
		s=m/2;
		re:
		f=s;
		s=(f+m/f)/2;
		if((f-s)>0.000001){
			goto re;
		}
		printf("s=%f\n",s);
	}
	return 0;
}
