#include<stdio.h>

float fak(signed y) // rekrusif untuk pangkatnya							
{
	if (y == 1)
    	return 1;
    		else
        		return y * fak(y - 1);
}
int main ()// fungsi dari main
{
		
		printf("\t\t  APROKSIMASI COS(X) DAN X DALAM RADIAN  \n\n");
		printf("\t\t  NAMA : Fahmi Fahrurroziq\n");
		printf("\t\t  17081010079\n");
		printf("=============================================\n\n");

	double cos,sin,pertama,kedua,ketiga,keempat,akhir;
	int bil,c,xo;
	sin=0.8415;
	cos=0.5403;
	xo=1;
	printf("NILAI YANG PALING MENDEKATI DENGAN HASIL MENGGUNAKAN 10 KALI BATAS\n\n");// saya sudah membuktikan dengan adanya refrensi dari google
	printf("Inputkan Nilai cos(X) = ");
	scanf("%d",&bil); 
	
	
	for (c=0;c<5;c++)// mengulang batas turunan yang sudah saya tentukan
	{
		if(c==0)
		{
			printf("Hasil pertama = %lf\n",cos);
		}
		else if(c==1)
		{
			
			pertama=(bil-xo);
			pertama=pertama/fak(1)*sin*-1;
			printf("Hasil kedua   = %lf\n",pertama);
	
		}
		else if (c==2)
		{ 
			
			kedua=((bil-xo)*(bil-xo));
			kedua=kedua/fak(2)*cos*-1;
			printf("Hasil ketiga  = %lf\n",kedua);
					
			
		}
		else if(c==3)
		{
			
			ketiga=((bil-xo)*(bil-xo)*(bil-xo));
			ketiga=ketiga/fak(3)*sin;
			printf("Hasil keempat = %lf\n",ketiga);
					
		}
			else if(c==4)
		{
		
			keempat=((bil-xo)*(bil-xo)*(bil-xo)*(bil-xo));
			keempat=keempat/fak(4)*cos*1;
			printf("Hasil kelima  = %lf\n",keempat);
					
		}
		else 
		{
			printf("NO");
		}
	}

	akhir=cos+pertama+kedua+ketiga+keempat;// proses menjumlah hasil akhir
	printf("\nHASIL AKHIR  = %lf + %lf + %lf + %lf + %lf = %lf ",cos,pertama,kedua,ketiga,keempat,akhir);
	return 0;
}
