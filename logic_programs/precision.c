#include <stdio.h>
int main(){
	double x=1234.567890;
	int i=8, j=2;
	while(i<12){
		j=2;
		while(j<5){
			printf("width=%2d precision=%d display >>%*.*lf<<\n",i,j,i,j,x);
			j++;
		}
		i++;
	}
	return 0;
}
