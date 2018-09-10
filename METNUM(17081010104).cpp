#include <stdio.h>
#define PI 3.1415

int main()
{
	printf("-----KALKULATOR COS(X)----- \n");
	printf("Masukan x Dalam Satuan Radian = ");
	float angle_radian;
	scanf("%f",&angle_radian);
	float ans=1;
	float temp=1;
	int acc=3;
	int i;
	for (i=1 ; i <= 20*acc ; i +=2)
	{
		temp = temp*(-1)*angle_radian*angle_radian/(i*(i+1));
		ans = ans + temp;
	}
	printf("cos(%f) = %f \n", angle_radian,ans);
return 0;
}
