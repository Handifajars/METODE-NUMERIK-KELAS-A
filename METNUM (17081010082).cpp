#include<stdio.h>

float fakt(signed a) 								//penghitung faktorial
{
	if (a == 1)
    	return 1;
    		else
        		return a * fakt(a - 1);
}
int main ()
{
		printf("PROGRAM MENGHITUNG NILAI COS(X) DENGAN APROKSIMASI\n");
		printf("RYAN EKA WIRATNA - 17081010082 \n");
		printf("-----------------------------------------------------\n");

	double cos,sin,a,b,c,d,akhir;
	int x,y,xo;
	int i;
	sin=0.8415;
	cos=0.5403;
	xo=1;
	
	printf("Masukan nilai dari cos (x) = ");
	scanf("%d",&x); 
	
	
	for (y=0;y<5;y++)
	{
		if(y==0)
		{
			printf("Hasil pertama = %lf\n",cos);
		}
		else if(y==1)
		{
					a=(x-xo);
					a=a/fakt(1)*sin*-1;
					printf("Hasil kedua   = %lf\n",a);
	
		}
		else if (y==2)
		{ 
				    b=((x-xo)*(x-xo));
					b=b/fakt(2)*cos*-1;//proses turunan
					printf("Hasil ketiga  = %lf\n",b);
			
		}
		else if(y==3)
		{
					c=((x-xo)*(x-xo)*(x-xo));
					c=c/fakt(3)*sin;
					printf("Hasil keempat = %lf\n",c);
		}
			else if(y==4)
		{
			        d=((x-xo)*(x-xo)*(x-xo)*(x-xo));
					d=d/fakt(4)*cos*1;
					printf("Hasil kelima  = %lf\n",d);
		}
		else 
		{
			printf("EROORRRR");
		}
	}

	akhir=cos+a+b+c+d;
	printf("Penjumlahan akhir dari turunan ke-4 = %lf + %lf + %lf + %lf + %lf = %lf ",cos,a,b,c,d,akhir);
	
	return 0;
}
