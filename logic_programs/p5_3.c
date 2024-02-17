#include <stdio.h>
int main(){
	int s_no;
	float amt, comm;
	char type;
	//char sname[50];
	
	printf("Enter Salesman Type: ");
	scanf("%c", &type);
	printf("Enter Salesman No:");
	scanf("%d", &s_no);
	printf("Enter Amount:");
	scanf("%f", &amt);
	//printf("Enter Salesman Name: ");
	//scanf("%s", &sname);
	
	if(type=='P'){
		comm=amt*0.09;
	}
	printf("%f", comm);
	
	return 0;
}
