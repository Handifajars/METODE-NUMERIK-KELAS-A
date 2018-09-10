#include <stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

float fk(signed a) 								
{
	if (a == 1)
    return 1;
    else
    return a * fk(a - 1);
}

float pkt(float basis, int eksponen) 				
{
	if(eksponen == 0)
	return 1;
	else if(eksponen == 1)
	return basis;
	else
	return basis * pkt(basis, eksponen - 1);
}
int main()
{
	printf("==============================================================\n");
	printf("PROGRAM UNTUK MENGHITUNG NILAI cos(x) MENGGUNAKAN APROKSIMASI \n");
	printf("==============================================================\n");
	printf("==============================================================\n");
						printf("Nama : Firman Romadhoni\n");
						printf("NPM  : 17081010015");
	printf("==============================================================\n");
	printf("==============================================================\n");

	{
	float x,phi,sin,cos;
	int xo=1;
	sin=0.8415;
	cos=0.5403;
	float r0,r1,r2,r3,r4,rs;
	printf("==============================================================\n");
	printf("Input nilai X satuan raidan = "); 	
	scanf("%f",&x);
	printf("==============================================================\n");
	float h=(x-xo);

		r0=cos*xo;
			r1=pkt(h,1)/fk(1)*sin*xo*(-1);
			r2=pkt(h,2)/fk(2)*cos*xo*(-1);
			r3=pkt(h,3)/fk(3)*sin*xo;
			r4=pkt(h,4)/fk(4)*cos*xo;	
		rs=r0+r1+r2+r3+r4; 								
	
			printf("r0= %f \n",r0);
			printf("r1= %f \n",r1);
			printf("r2= %f \n",r2);
			printf("r3= %f \n",r3);
			printf("r4= %f \n",r4);
				
		printf("==============================================================\n");
			printf("hasil = %f \n",rs);
		
	
			}
		}	
