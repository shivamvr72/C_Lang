#include <stdio.h>

int main(){
	char ch,x;
	do{
		printf("Enter A Character: ");
		scanf(" %c", &ch);
		
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' ||ch=='o' || ch=='O' || ch=='u' || ch=='U'){
			printf("%c Character is Volves\n", ch);
		}else{
			printf("%c Character is Normal Alphabets\n", ch);
		}
		printf("Do You want to continue y/n:");
		scanf(" %c", &x);
	}while(x=='y' || x=='Y');
	
	return 0;
}
