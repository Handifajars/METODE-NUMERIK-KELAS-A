#include<stdio.h>


int main ()
{
	double cos,sin,e,f,g,h,akhir;
	int hasil=1,bil1,bil2,bil3,bil4,hasil2=1,hasil3=1,hasil4=1;
	int x,y,X0;
	int i;
	bil1=1;
	bil2=2;
	bil3=3;
	bil4=4;
	sin=0.8415;
	cos=0.5403;
	X0=1;
	
	printf("Nama : Prameswari Reksa A\nNPM  : 17081010016\n" );
	printf("******************************************************************\n");
	printf("PROGRAM DALAM BAHASA C++ ATAU C UNTUK MENGAPROKSIMASI COS(x)\n");
	printf("******************************************************************\n\n");
	printf("Menghitung Aproksimasi cos(x) dengan Menggunakan Prinsip Deret Taylor\n\n");
	printf("Masukan Nilai x = ");
	scanf("%d",&x);
	
	for (y=1;y<=5;y++)
	{
		if(y==1)
		{
			printf("hasil 1 = %lf\n",cos);
		}
		else if(y==2)
		{
			for(i=1;i<=bil1;i++)
				{
					hasil=i*hasil;
					
				}
					e=(x-X0);
					e=e/hasil;
					e=e*sin;
					e=e*-1;
					printf("hasil 2 = %lf\n",e);
	
		}
		else if (y==3)
		{ 
			for(i=1;i<=bil2;i++)
				{
					hasil2=i*hasil2;
				
				}
				    f=((x-X0)*(x-X0));
					f=f/hasil2;
					f=f*cos;
					f=f*-1;
					printf("hasil 3 = %lf\n",f);
			
		}
		else if(y==4)
		{
			for(i=1;i<=bil3;i++)
				{
					hasil3=i*hasil3;
					
				}
			        g=((x-X0)*(x-X0)*(x-X0));
					g=g/hasil3;
					g=g*sin;
					g=g*1;
					printf("hasil 4 = %lf\n",g);
		}
			else if(y==5)
		{
			for(i=1;i<=bil4;i++)
				{
					hasil4=i*hasil4;
					
				}
			        h=((x-X0)*(x-X0)*(x-X0)*(x-X0));
					h=h/hasil4;
					h=h*cos;
					h=h*1;
					printf("hasil 5 = %lf\n\n",h);
		}
		else {
			printf("ora iso woyy");
		}
	}
	akhir=cos+e+f+g+h;
	printf("-PENJUMLAHAN AKHIR-\n");
	printf("Cos(x) = %lf + %lf + %lf + %lf + %lf\n       = %lf ",cos,e,f,g,h,akhir);
	
	return 0;
}
