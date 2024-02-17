#include <stdio.h>
int main(){
//matrix
int col1, row1, value;

	int mat1[3][3];
	printf("Ente NUmber of Rows for mat1");
	scanf("%d", &row1);
	printf("Ente NUmber of Columns for mat2");
	scanf("%d", &col1);

	
	for(int i=0; i<row1; i++){
		for(int j=0; j<col1;j++){
			printf("Input value for mat1\n");
			scanf("%d", &value);
			mat1[i][j] = value;
		}
	}
	printf("Matrix first\n");
	for(int i=0; i<row1; i++){
		for(int j=0; j<col1;j++){
			printf(" %d", &mat1[i][j]);
		}
		printf("\n");
	}

	
	/*
	printf("Ente NUmber of Rows");
	scanf("%d", &row2);
	printf("Ente NUmber of Columns");
	scanf("%d", &col2);
	mat1[10][10];
	
	for(int i=0; i<row2; i++){
		for(int j=0; j<col2;j++){
			printf("Input value for mat2\n");
			scanf("%d", &mat2[i][j]);
		}
	}*/
	


return 0;
}






/*
//kajukatri
 	int n=5;
 	for(int i=1; i<=n; i++){
 		for(int j=n; j>=i;j--){
 			printf(" ");	
 		}
 		for(int j=1; j<=i; j++){
 			printf("%d",i);
 		}
 		for(int j=1; j<i; j++){
 			printf("%d",i);
 		}
 		printf("\n");
 	}
 	for(int i=n-1; i>=1; i--){
 		for(int j=n; j>=i;j--){
 			printf(" ");	
 		}
 		for(int j=1; j<=i; j++){
 			printf("%d",i);
 		}
 		for(int j=1; j<i; j++){
 			printf("%d",i);
 		}
 		printf("\n");
 	}*/
