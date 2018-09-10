#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793238462
double modulusFloat(double pembilang, double pembagi){
	int x = (int)pembilang/pembagi;
		return pembilang - pembagi*x;
}
unsigned long long int faktorial(int n){
	unsigned long long int sum = 1;
		if(x == 1 || x == 0)
			return 1;
		else
			return x * faktorial(x - 1);		
}
double pangkat(double basis, int eksponen){
	
	if(eksponen == 0)
		return 1;
	else if(eksponen == 1)
		return basis;
	else
		return basis * pangkat(basis, eksponen - 1);
}
double cos(double y){
	y = modulusFloat(y, PI*2);

	double sum = 0;
	int a = 0;
	
	while(a < 10){
		
		if(a % 2 == 0)
			sum = sum + ( pangkat(y, a*2) / faktorial(a*2) );
		else
			sum = sum - ( pangkat(y, a*2) / faktorial(a*2) );
		a++;
	}
	return sum;
}
int main(){
	double input;
	char lanjut;
	
	printf("Cosinus menggunakan metode deret taylor\n");
	while(true){
		printf("Masukkan angka kedalam fungsi cos(x) dalam satuan radian : \n");
		scanf("%lf", &input);
		
		printf("cos(%.2f) adalah %lf\n", input, cos(input));
		
		printf("\nGunakan lagi? (Y/y) : ");
		scanf("%s", &lanjut);
	
		if(lanjut == 'Y' || lanjut =='y'){
			system("CLS");
			continue;
		}
		else {
			printf("--------Terimakasih--------");
			break;
		}
	}	
	return 0;
}
