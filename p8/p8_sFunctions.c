#include <stdio.h>
#include <string.h>
//#include <conio.h>
int main(){
	char n1[]="hello";
	char n2[]=" wolrd";
	char n3[]=" how are you! ";
	/*
	//concatination
	strcat(n1,n2);
	printf("%s\n",n1);
	//printf("Two string = %s\n", strcat(n1,n2));
	//printf("Two string = %s\n", strncat(n1,n2,2)); //it can able to append and concatinate the character of second string
	
	/*
	//for length
	int slen;
	slen = strlen(n1);
	printf("Length of %s is = %d\n", n1, slen);
	
	int lens = strlen("hello world");
	printf("%d\n", lens);
	//printf("length of %s is = \n", strlen(n2)); //it will work but with warnings
	
	
	//for copy
	strcpy(n1, n3);
	puts(n1);
	*/
	//for compare 
	
	//int scmp = strcmp(n2 ,n1);
	//printf("%d\n", scmp);
	
	
	char s1[]= "SnehShiv";
	strupr(s1);
	printf("upper %s \n", s1);
	//printf("lower %s \n");
return 0;
}
