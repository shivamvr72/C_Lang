#include <stdio.h>
int main(){
	float n1, n2;
	char op;
	int x;
	
	do{
		printf("Select Operator: ");
		scanf(" %c", &op);
		printf("Enter A Number1: ");
		scanf("%f", &n1);
		printf("Enter A Number2: ");
		scanf("%f", &n2);
		if(op=='+'){
			float add=n1+n2;
			printf("addition:%0.2f\n",add);
		}else if(op=='-'){
			float sub=n1-n2;
			printf("Subsraction:%0.2f\n",sub);
		}else if(op=='*'){
			float mul=n1*n2;
			printf("Multiplication:%0.2f\n",mul);
		}else if(op=='/'){
			float div=n1/n2;
			printf("Division:%0.2f\n",div);
		}else{
			printf("Something Wrong!");
		}
		printf("Do You want to do more? yes=1/no=0\n");
		scanf("%d",&x);
	}while(x==1);
	
	return 0;
}

