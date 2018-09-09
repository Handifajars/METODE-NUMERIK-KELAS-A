#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846

unsigned long factorial(signed b)
{
    if (b == 1)
        return 1;
    else
        return b * factorial(b - 1);
}

int main(){
	int a, x0;
	double x, fungsi, c, d;
	float rad;
	
	printf("Masukkan input yang diinginkan: ");
	scanf("%f", &rad);
	printf("Masukkan fungsi yang diinginkan = \n0. Mclaurin \n1. Taylor\n pilihan \t= ");
	scanf("%d", &x0);
	
	c=rad*180/M_PI;
	
	x=cos(x0);
	d=(c-x0);
	
	fungsi = x + (pow(d, 1)/factorial(1)*pow(d, -1)) + (pow(d, 2)/factorial(2)*pow(x, -2)) + (pow(d, 3)/factorial(3)*pow(x, -3)) + (pow(d, 4)/factorial(4)*pow(x, -4));
	printf("cos (%f) adalah = %f", c, fungsi);
}
