#include <stdio.h>
int main(){
//odd or even
	int num;
	printf("Enter Number to check odd or even:");
	scanf("%d", &num);
	if(num==0){
		printf("%d is zero\n",num);
	}else if(num%2==0){
		printf("%d number is Even\n",num);
	}else if(num%2==1){
		printf("%d number is odd\n",num);
	}else{
		printf("%d Something Wrong\n",num);
	}

return 0;
}

/*
// finding out the max number 
int a,b,c;
	printf("Enter Three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c){
		printf("A max\n");
	}else if(b>c){
		printf("B max\n");
	}else if(a==b && b==c && a==c){
		printf("Equal\n");
	}else{
		printf("C max\n");
	}
*/
/*
//positive negative number
	int number;
	printf("Enter A number: ");
	scanf("%d", &number);
	if(number>0){
		printf("%d is Positive\n",number);
	}else if(number<0){
		printf("%d is Negative\n",number);
	}else if(number==0){
		printf("%d is Zero\n",number);
	}else{
		printf("Opps, Something Wrong!!");
	}
*/
/*
//finding out quetient and reminder
	int num,num2;
	printf("Enter 1st Number: ");
	scanf("%d", &num);
	printf("Enter 2nd Number: ");
	scanf("%d", &num2);
	int quotient = num/num2;
	int reminder = num % num2;
	
	printf("Quotient %d\n", quotient);
	printf("Reminder %d\n", reminder);
*/	
/*
//find out simple itrest rates
	float interest, principle, rate, year;
	printf("Enter principle Amount: ");
	scanf("%f", &principle);
	printf("Enter Rate of Intrest: ");
	scanf("%f", &rate);
	printf("Enter No of Years: ");
	scanf("%f", &year);
	interest = principle * rate * year/100;
	printf("%.2f Interest for %.2f principle amount at the rate of %.2f\n",interest, principle, rate);
*/
/*
//average of three number 
	int a,b,c;
	printf("Enter Three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("Average = %d\n" , (a+b+c)/3);
*/
/*
//leap year or not
	int year;
	printf("Enter The Year:");
	scanf("%d", &year);
	if (year % 4 == 0 || year % 400==0 && year%100==1){
		printf("%d Leap Year\n",year);
	}else{
		printf("%d Normal Year\n",year);
	}
*/
