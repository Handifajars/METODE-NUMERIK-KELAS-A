#include<stdio.h>


int factorial(int a)
{
	if (a==1) return 1;
	else 
	return a*factorial(a-1);
}
double pangkat(double basis, int eksponen){
	if(eksponen == 0)
		return 1;
	else if(eksponen == 1)
		return basis;
	else
		return basis * pangkat(basis, eksponen - 1);
	}	


int main()
{
	double x,derajat,phi=3.141592653589793238462;
	double cos,sin,hasil;
	int x0=1;
	cos=0.5403;
	sin=0.8415;

	printf("masukkan x=");
	scanf("%lf",&derajat);
	
	x=derajat*180/phi;
	float h=(derajat-x0);
	
	hasil= cos*x0+(pangkat(h,1)/factorial(1)*(-1)*sin*x0)
			+(pangkat(h,2)/factorial(2)*(-1)*cos*x0)
			+(pangkat(h,3)/factorial(3)*sin*x0)
			+(pangkat(h,4)/factorial(4)*cos*x0);
	

		printf("hasil dari radian ke derajat adalah %lf\n",x);
		printf("cos(%lf) adalah %lf",x,hasil);
}
	

	


