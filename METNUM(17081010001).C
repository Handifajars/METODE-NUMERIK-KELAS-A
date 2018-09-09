#include <stdio.h>

float aproksimasi(float x, int batas);

int main()
{
    int x, batas;
	printf("Masukkan nilai x (Dalam radian) : ");
	scanf("%d", &x);
	printf("Masukkan Batas : ");
	scanf("%d", &batas);
	printf("\nCos dari %d adalah %f .\n\n", x, aproksimasi(x, batas));
}

float aproksimasi(float x, int batas)
{
	float hasil =1, temp =1;
	int tanda =-1, i=0, r=1;
	do{
		i=i+2;
		temp= temp*((x*x)/(i*(i-1)));
		hasil += tanda*temp;
		r++;
		tanda=-tanda;
	}
	while (r<batas);
	return hasil;
	
}