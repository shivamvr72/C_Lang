#include <stdio.h>
#include <math.h>
int main(){
/*
	int a[2], b[2], c[2];
	
	for(int i=1; i<=2; i++){
	printf("Enter A Vertices: ");
	scanf("%d", &a[i]);
	printf("Enter B Vertices: ");
	scanf("%d", &b[i]);
	printf("Enter C Vertices: ");
	scanf("%d", &c[i]);
	}
	for(int i=1; i<=2; i++){
		printf("a= %d\n",a[i]);
		printf("b= %d\n",b[i]);
		printf("c= %d\n",c[i]);
	}
*/


//to find out the triangle is equilateral or not
	int x[3];
	int y[3];
	float z[3];
	
	for(int i=0; i<3 ; i++){
		printf("Enter x[%d], y[%d] : ", i,i);
		scanf("%d %d", &x[i], &y[i]);
	}
	z[0] = (float) sqrt(pow(x[0]-x[1],2))+pow(y[0]-y[1],2);
	z[1] = (float) sqrt(pow(x[1]-x[2],2))+pow(y[1]-y[2],2);
	z[2] = (float) sqrt(pow(x[0]-x[2],2))+pow(y[0]-y[2],2);
	
	if(z[0]==z[1] && z[1]==z[2]){
		printf("Trinagle is Equilateral\n");
	}
	else{
		printf("Triangle is not equilateral\n");
	}
	
	return 0;
}
