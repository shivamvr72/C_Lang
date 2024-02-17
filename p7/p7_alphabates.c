#include <stdio.h>
int main(){
	char ch='A';
	while(ch<='z'){
		if(ch==91){
			continue;
		}
		printf("%d\n", ch);
		ch++;
	}	
return 0;
}
