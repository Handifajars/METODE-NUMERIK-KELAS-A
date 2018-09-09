#include<stdio.h>



float fc(signed a)
{
	
    if (a == 1){
        return 1;
	}else{
	return a * fc(a - 1);
	}
}
float pangkat(float basis, int eksponen)
{
	if(eksponen==0){
		return 1;
	}else if(eksponen==1){
		return basis;
	}else {
		return basis*pangkat(basis,eksponen-1);
}
}
 		 
int main(){
	int x0=1;
	double cos,sin,fungsi, x;
	double rad;
	cos=0.5403;
	sin=0.8415;
	float phi=3.14159265358979323846;
	
	printf("--------------------------------------------------\n");
	printf("            PROGRAM APROKSIMASI COS(X)            \n");
	printf("--------------------------------------------------\n");
	printf("Muhammad Rizki Alamsyah		17081010010   \n");
	printf("masukkan input anda (dalam radian) = ");
	scanf("%lf", &rad);
	x= rad*180/phi;
	float h=(rad-x0);
	
	fungsi = cos*x0+(pangkat(h,1)/fc(1)*(-1)*sin*x0)+(pangkat(h,2)/fc(2)*(-1)*cos*x0)+(pangkat(h,3)/fc(3)*sin*x0)+(pangkat(h,4)/fc(4)*cos*x0);
	
	printf("cos (%f) adalah : %f",x,fungsi);
	
	
}
 


	

	 

	 
