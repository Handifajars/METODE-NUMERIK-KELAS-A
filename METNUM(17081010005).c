#include<stdio.h>
#define Phi 3.14159265358979323846

double p(float akhiran, int awalan)
{
	if(awalan==0){
		return 1;
	}else if(awalan==1){
		return akhiran;
	}else {
return akhiran*p(akhiran,awalan-1);
}
}

double faktor(signed f)
{
    if (f == 1)
        return 1;
    else
        return f * faktor(f - 1);
}
	int main(){
	
	int c;
	double hasilradian;
	float r,penyelesaian;
	double sin,cos;
	sin=0.8415;
	cos=0.5403;
	
	printf("NAMA : RAMA ANDIKA JORGIE\n");
	printf("NMP  : 17081010005 \n");
	
	printf(" \nMasukan Bilangan dalam satuan (Radian) yang ingin diaproksimasi = ");
	scanf("%f",&r);
	hasilradian=(180*r)/Phi;
	printf("\n=========PILIH DERET YANG DIGUNAKAN============  :\n");
    printf("\nKita Mengunakan x0=1 (isi dengan 1 )= ");
	scanf("%d",&c);
	double hasilf1=(r-c);
	if(c==1)
	
	{ printf("\n(Kamu menggunakan Deret tylor)\n");
	}
	else if(c!=1)
	
	{ printf("\n(MAAF input SALAH)\n" );
	return 0;
	} 	
	
	 penyelesaian= 
		cos*(c)  + 
	((p(hasilf1,1)/faktor(1))
	  *(-1)*sin*c) + 
	((p(hasilf1,2)/faktor(2))
	  *(-1)*cos*c) + 
	((p(hasilf1,3)/faktor(3))
	  *(sin*c)) + 
	((p(hasilf1,4)/faktor(4))
	  *(cos*c));
	
	printf("\ncos (%0.1f) adalah : %1f",hasilradian,penyelesaian);
		
}
 


	

	 

	 
