#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    double x, result;
	printf("Nama : Nurlisa Aulia\n");
	printf("NPM : 17081010019\n\n");
	printf("Masukkan x (dalam radian): ");
	scanf("%lf", &result);
	
	x = cos (result);
	
	printf("Hasil dari cos(%.2lf) = %.2lf\n\n", result, x);
	printf("THANKYOU!\n");
	return 0;
}
