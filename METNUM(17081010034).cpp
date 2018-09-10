#include<stdio.h>

int faktorial(int n)
{
if (n==0) return 1;
else
return n*faktorial(n-1);
}

int main()
{
	float x,y,z;
	double b,X0;
	int i;
	int hasil=1;//ketentuan deret taylor
	
	printf("Aproksimasi Nilai Cos(x) : \n");
	printf("\n=======================================================\n");
	printf("\nNama : Firdausia Ismi Nurhayati\n");
	printf("NPM : 17081010034 \n");
	printf("\n========================================================\n");
	printf("Masukkan Nilai x dalam radiant : ");
	scanf("%f",&x);//menyimpan input dari nilai x
	
		x=x*3.14159/180;//menunjukkan nilai PI
		
	for (y=1;y<=5;y++)
	{
		if(y==1)
		{
			printf("hasil = %lf\n",x);
		}
		else if(y==2)
		{
			for(i=1;i<=5;i++)//menghitung faktorial dan looping
				{
					hasil=i*hasil;
					
				}
					b=(x-X0);
					b=b/hasil;
					b=b*x;
					b=b*-1;
					printf("hasil=%lf\n",x);
				
	printf("Nilai cos x=%lf\n\n",x);				
	printf("\n+++++Thankyou++++++\n");
	

}
}
}
	
