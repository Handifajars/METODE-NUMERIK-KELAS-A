#include<stdio.h>

float faktorial(signed z) 							
{
	if (z == 1)
    	return 1;
    		else
        		return z * faktorial(z - 1);
}
int main ()
{
		printf("===================================================================================================\n\n");
		printf("=======================  PROGRAM APROKSIMASI COS(X) DAN X DALAM RADIAN  ===========================\n\n");
		printf("=================================================================================================== \n");
		printf("\t oleh	: Mifa Abiyyu Hibatulloh\n");
		printf("\t\t 17081010090\n");
		printf("________________________________________________________________________________________________\n\n");

	double cos,sin,f,g,h,i,akhir;
	int x,y,xo;
	sin=0.8415;
	cos=0.5403;
	xo=1;
	
	printf("Inputkan nilai dari cos (x) dalam Radian = ");
	scanf("%d",&x); 
	
	
	for (y=0;y<5;y++)
	{
		if(y==0)
		{
			printf("Hasil pertama = %lf\n",cos);
		}
		else if(y==1)
		{
			
			f=(x-xo);
			f=f/faktorial(1)*sin*-1;
			printf("Hasil kedua   = %lf\n",f);
	
		}
		else if (y==2)
		{ 
			
			g=((x-xo)*(x-xo));
			g=g/faktorial(2)*cos*-1;
			printf("Hasil ketiga  = %lf\n",g);
					
			
		}
		else if(y==3)
		{
			
			h=((x-xo)*(x-xo)*(x-xo));
			h=h/faktorial(3)*sin;
			printf("Hasil keempat = %lf\n",h);
					
		}
			else if(y==4)
		{
		
			i=((x-xo)*(x-xo)*(x-xo)*(x-xo));
			i=i/faktorial(4)*cos*1;
			printf("Hasil kelima  = %lf\n",i);
					
		}
		else 
		{
			printf("TIDAK TERDEFINISI");
		}
	}

	akhir=cos+f+g+h+i;
	printf("\nPenjumlahan akhir dari turunan ke-4 = %lf + %lf + %lf + %lf + %lf = %lf ",cos,f,g,h,i,akhir);
	
	return 0;
}
