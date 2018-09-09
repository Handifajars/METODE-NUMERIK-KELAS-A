#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846

unsigned long factorial(signed a)
{
    if (a == 1)
        return 1;
    else
        return a * factorial(a - 1);
}
int main(){
	int a, x0;
	double n, fungsi, x, y;
	float rad;
	
	printf("Masukkan angka: ");
	scanf("%f", &rad);
	printf("Masukkan fungsi yang akan pilih = \n0. Mclaurin \n1. Taylor\n pilihan \t= ");
	scanf("%d", &x0);
	
	x=rad*180/M_PI;
	n=cos(x0);
	y=(x-x0);
	
	fungsi = n + (pow(y, 1)/factorial(1)*pow(y, -1)) + (pow(y, 2)/factorial(2)*pow(n, -2)) + (pow(y, 3)/factorial(3)*pow(n, -3)) + (pow(y, 4)/factorial(4)*pow(n, -4));
	printf("cos (%f) adalah = %f", x, fungsi);
}
