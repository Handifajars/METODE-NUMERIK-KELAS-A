#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    double x, result;
	printf("Masukkan x (dalam radian): ");
	scanf("%lf", &result);
	
	x = cos (result);
	
	printf("\n hasil dari cos(%.2lf) = %.2lf\n", result, x);
	
	return 0;
}