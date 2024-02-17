#include <stdio.h>
int main(){
	int m=5;
	 //Triangle-q2
	 /*
	for(int i=1; i<=m; i++){
		for(int s=1; s<=i; s++){
			printf("*");
		}
		printf("\n");
	}
	
	*/
	/* //Rectangle
	for(int i=1; i<=m; i++){
		for(int s=1; s<=5; s++){
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	//Triangle-q4
	for(int i=1; i<=m; i++){
		for(int s=5; s>i; s--){
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	//Triangel-q1
	for(int i=1;i<=5;i++){
		for(int j=5;j>i;j--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		
		printf("\n");
	}
	*/
	
	/*
	//Triangle-q3
	for(int i=1;i<=5;i++){
		for(int j=1; j<i; j++){
			printf(" ");
		}
		for(int j=5; j>=i; j--){
			printf("*");
		}
		printf("\n");
	}
	*/
	
	//Kajukatri pattern
	for(int i=1; i<=5; i++){
		for(int j=5; j>i ;j--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		for(int j=1;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2; i<=5; i++){
		for(int j=1;j<i;j++){
			printf(" ");
		}
		for(int j=5; j>=i ;j--){
			printf("*");
		}
		for(int j=5; j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
