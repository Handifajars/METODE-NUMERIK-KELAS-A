#include<stdio.h>
#define PI 3.1415

main()
{
	printf("Masukkan Nilai cos(x) :\n");
	float nilai;
	int i;
	scanf("%f", &nilai);
	nilai=nilai*PI/180;
	float ans=1;
	float temp=1;
	int acc=3;
	
	for (i=1; i<=2*acc; i+=2){
		temp=temp*(-1)*nilai*nilai/(i*(i+1));
		ans=ans+temp;
		
	}
	
	printf("cos(%f)=%f\n",nilai,ans);
	
}
