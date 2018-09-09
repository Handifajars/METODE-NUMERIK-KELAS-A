#include <stdio.h>

int main()
{
    int a;//batas untuk menentukan banyaknya looping, semakin banyak looping hasil hitungan mendekati eksak 
	int	tanda;
	int	i;//variabel pangkat
    float x;
	float hasil;
	float term;
	
		term = 1;
		hasil = 1;
		tanda = -1;
		i=0;
		
	printf ("*************************MENGHITUNG APROKSIMASI COS X*************************\n\n");
	printf ("Nama : Salsabila Citra Esananda\n");
	printf ("NPM : 17081010029\n");
    printf("\nMasukkan Nilai X (dalam radian): ");
    scanf("%f", &x);
    printf("\nMasukkan Batas (semakin besar nilai batas dari x semakin akurat):  "); 
	scanf("%d", &a);

	int y = 1;
	do
	{
		i=i+2;//variabel pangkat kelipatan 2 karena fungsi cos x yang dihitung setiap pangkat genap, pangkat ganjil hasilnya 0
        term = term*((x*x)/(i*(i-1)));
    	hasil = hasil + (tanda*term);
    	++y;
    	tanda = -tanda;
	} while (y < a - 1);
	
		printf("\nCos dari %1.0f adalah %f \n\n", x, hasil);
}
