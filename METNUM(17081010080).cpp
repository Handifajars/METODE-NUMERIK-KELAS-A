#include<stdio.h>
#include<math.h>

int main()
{
	int n,x1,i,j;
	float x,sign,cosx,fact;
	
	printf("masukan nilai yang ingin di inputkan = \n");
	scanf("%d", &n);
	printf("masukan nilai dari x = ");
	scanf("%f", &x);
	
	x1=x;
	x=x * (3.142/180.0); 
	cosx=1;
	sign=-1;
	
	for (i = 2; i <= n; i+=2)
	{
		fact = 1;
		for (j = 1; j <=i; j++){
		
		}
		cosx+=cosx* sign / fact ;
		sign = -1 * sign;
	}
	printf("jumlah kosinus = %7.2f\n",cosx);
	printf("nilai dari cos (%d) menggunakan fungsi = %f\n",x1,cosx);
	
} /*End of main() */
