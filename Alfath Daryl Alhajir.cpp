#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

double modulusFloat(double pembilang, double pembagi){
	int n = (int)pembilang / pembagi;
	
	return pembilang - pembagi*n;
}

unsigned long long int faktorial(int n){
	unsigned long long int sum = 1;
	if(n == 1 || n == 0)
		return 1;
	else
		return n * faktorial(n - 1);
		
}

double pangkat(double basis, int eksponen){
	if(eksponen == 0)
		return 1;
	else if(eksponen == 1)
		return basis;
	else
		return basis * pangkat(basis, eksponen - 1); 
}
		

double cos(double x){
	x = modulusFloat(x, PI*2);

	double sum = 0;
	int i = 0;
	
	while(i < 10){
		if(i % 2 == 0){
			sum = sum + ( pangkat(x, i*2) / (double)faktorial(i*2) );
			printf("Iterasi %d : %lf \t%lf \t\t%.2llu  \n", i, sum, pangkat(x, i*2), faktorial(i*2));
		}
		else{
			sum = sum - ( pangkat(x, i*2) / (double)faktorial(i*2) );
			printf("Iterasi %d : %lf \t%lf \t\t%.2llu  \n", i, sum, pangkat(x, i*2), faktorial(i*2));
		}
		i++;
	}
	
	return sum;
}


int main(){
	double input;
	char lanjut;	
	
	printf("Selamat datang di kalkulator cosinus menggunakan metode deret taylor\n");
	while(true){
		printf("Silahkan masukkan angka yang ingin anda masukkan ke fungsi cos(x) dalam satuan radian : \n");
		scanf("%lf", &input);
		
		printf("cos(%.2f) adalah %lf\n", input, cos(input));
		
		printf("\nGunakan lagi? (Y/y) : ");
		scanf("%s", &lanjut);
	
		if(lanjut == 'Y' || lanjut =='y'){
			system("CLS");
			continue;
		}
		else {
			printf("Terimakasih telah menggunakan");
			break;
		}
	}
	
	return 0;
}
