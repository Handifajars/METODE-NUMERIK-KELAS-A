#include <stdio.h>

float fak(signed a) 								//penghitung faktorial
{
	if (a == 1)
    	return 1;
    		else
        		return a * fak(a - 1);
}

float pkt(float basis, int eksponen) 				//penghitung pangkat
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
	printf("PROGRAM MENGHITUNG NILAI COS(X) DENGAN APROKSIMASI\n");
		printf("-----------------------------------------------\n");
			printf("Dibuat oleh : ARIS PRABOWO - 17081010036 \n");
				printf("----------------------------------------\n");

	{

	float x,phi,sin,cos;
	int xo=1;
	sin=0.8415;
	cos=0.5403;
	float r0,r1,r2,r3,r4,rs;
	printf("Masukan nilai X dalam satuan radian = "); 	//user menginput data dalam satuan radian
	scanf("%f",&x);
	float h=(x-xo);

	r0=cos*xo;
	r1=pkt(h,1)/fak(1)*sin*xo*(-1);
	r2=pkt(h,2)/fak(2)*cos*xo*(-1);
	r3=pkt(h,3)/fak(3)*sin*xo;
	r4=pkt(h,4)/fak(4)*cos*xo;	
	rs=r0+r1+r2+r3+r4; 								//iterasi aproksimasi sampai suku ke-4
	
		printf("r0= %f \n",r0);
				printf("r1= %f \n",r1);
						printf("r2= %f \n",r2);
								printf("r3= %f \n",r3);
											printf("r4= %f \n",r4);
											
	printf("Hasilnya adalah = %f \n",rs);
	
	return 0;
			}
		}	

