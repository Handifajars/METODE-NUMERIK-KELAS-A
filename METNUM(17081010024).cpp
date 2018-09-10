#include <stdio.h>

#define PI 3.14

unsigned long factorial(signed a){
	if (a == 1)
		return 1;
	else
		return a * factorial(a - 1);
}

int main(){
	float x, cos, temp = 1, result = 1;
	int i = 0, tnd = -1, b=1;
	
	printf("---------------------------------------------------\n");
	printf("     PROGRAM MENCARI NILAI COS(X) DALAM RADIAN     \n");
	printf("---------------------------------------------------\n");
	printf("Nama : IDA WAHYUNITA\n");
	printf("NPM  : 17081010024\n");
	printf("												   \n");
	printf("Input Nilai x dalam Radian: ");
	scanf("%f", &x);
	printf("Input Batas: ");
	scanf("%d", &tnd);
	
	cos = x/PI;
	
	i=i+2;
	for (int b=1;b<=tnd;b++,tnd=-tnd){
		temp = temp*((x*x)/(i*(i-1)));
		result = result + (tnd*temp);
	}
	printf("\nCOS (%2.0f) hasilnya: %f\n",cos*180,result*-1);
}
