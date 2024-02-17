#include <stdio.h>
int main(){
//palindrom
	int num, lno, res, pln=0;
	printf("Enter Number: ");
	scanf("%d", &num);
	res=num;
	while(num>0){
		lno=num%10;
		num/=10;
		pln=(pln*10)+lno;
		
	}
	
	
	if(pln==res){
		printf("%d is palindrom number", res);
	}else{
		printf("%d is not palindrom ", res);
	}
	return 0;
}
/*
//take integer number from user to check number as positive or negative
	float num;
	int temp;
	printf("Enter Number:");
	scanf("%f", &num);
	temp = num;
	if(num!=temp){
		printf("Number is float\n");
	}else{
		if(temp>0){
			printf("%d is Positive\n", temp);
		}else if(num<0){
			printf("%d is negative\n", temp);
		}else if(num==0){
			printf("%d is Zero\n",temp);
		}else{
			printf("Something Wrong\n");
		}
	}
*/

/*
//Electricity bill
	int unit;
	printf("Enter Unit Consumed: ");
	scanf("%d", &unit);
	
	if(unit>=0 && unit<=100){
		printf("%.2f\n", unit*(.75));
	}else if(unit>100 && unit<=300){
		printf("%.2f\n", ((unit-100)*1)+75.0);
	}else if(unit>300 && unit<=500){
		printf("%.2f\n", ((unit-300)*1.5)+275.0);
	}else if(unit>500){
		printf("%.2f\n", ((unit-500)*1.75)+575.0);
	}
*/	

/*
//salesman
	int s_no;
	char s_type;
	char s_name[30];
	float sales, com;
	
	printf("Enter Salesman Number: ");
	scanf("%d", &s_no);
	printf("Enter Salesman Name: ");
	scanf("%s", &s_name);
	printf("Enter Salesman Type P/D/H: ");
	scanf(" %c", &s_type);
	printf("Enter Sales Amount: ");
	scanf("%f", &sales);
	
	if(s_type=='P'){
		com= sales*0.09;
	}else if(s_type=='H'){
		com= sales*0.05;
	}else if(s_type=='D'){
		com= sales*0.02;
	}else{
		printf("Something Wrong");
	}
	
	printf("Salesman NUmber %20d\n", s_no);
	printf("Salesman Name %20s\n", s_name);
	printf("Salesman Type %20c\n", s_type);
	printf("Sales Amount %20.2f\n", sales);
	printf("Sales Comission %20.2f\n", com);	
*/
/*
//to check armstrong number
	int num, lno, lno2,res,res2, pow=0,count=0;
	printf("Enter Number: ");
	scanf("%d", &num);
	res=num;
	res2=num;
	while(num>0){
		lno = num%10;
		num/=10;
		count++;
		pow+=lno*lno*lno;
		
		if(count==4){
			pow=0;
			while(res>0){
				lno2= res%10;
				res/=10;
				pow+=lno2*lno2*lno2*lno2;
			}
		}
		
	}
	if(res2==pow){
		printf("%d is Armstrong Number\n",res2);
	}else{
		printf("%d is Ordinary Number\n",res2);
	}
*/
