#include<stdio.h>
float fak(signed y)							
{
	if (y == 1)
    	return 1;
    		else
        		return y * fak(y - 1);
}

int main ()

{	
	printf("PROGRAM APROKSIMASI COS(X) DAN X DALAM RADIAN\n");
	printf("\nAliev Wisnu Prasetyo\n");
	printf("17081010093\n");
	printf("Metode Numerik\n\n");
	
	double cos,sin,pertama,kedua,ketiga,keempat,kelima,akhir;
	int bil,c,xo;
	
	sin=0.8415;
	cos=0.5403;
	xo=1;
	
	printf("Inputkan Nilai cos(X) = ");
	scanf("%d",&bil); 
	
	for (c=0;c<6;c++)
	{
		if(c==0)
		{
			printf("\nHasil pertama = %lf\n",cos);
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
		else if(c==5)
		{
			kelima=((bil-xo)*(bil-xo)*(bil-xo)*(bil-xo));
			kelima=kelima/fak(4)*cos*1;
			printf("Hasil keenam  = %lf\n",kelima);			
		}
		else 
		{
			printf("Tidak Terdefinisi");
		}
	}
	
	akhir=cos+pertama+kedua+ketiga+keempat+kelima;
	
	printf("\nHasil Akhir  = %lf + %lf + %lf + %lf + %lf + %lf = %lf ",cos,pertama,kedua,ketiga,keempat,kelima,akhir);
	
	return 0;
}
