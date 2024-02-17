#include <stdio.h>
int main(){

//swaping number
	int a=10, b=20;
	int c=b;
	b=a; 
	a=c;
	printf("a=%d b=%d\n",a,b);
//swaping number without using varible
	int x=10, y=20;
	x+=y;
	y=x-y;
	x=x-y;
	printf("x=%d y=%d\n", x, y);
	
	
	
return 0;
}
/*
//finding out grades of student
	int marks;
	printf("Enter Marks: ");
	scanf("%d", &marks);
	if (marks>90 && marks<=100){
		printf("Grade O\n");
	}else if (marks>80 && marks<=90){
		printf("Grade A\n");
	}else if (marks>60 && marks<=80){
		printf("Grade B\n");
	}else if (marks>45 && marks<=60){
		printf("Grade C\n");
	}else if (marks>=0 && marks<=45){
		printf("Grade F\n");
	}else{
		printf("something Wrong\n");
	}
*/

