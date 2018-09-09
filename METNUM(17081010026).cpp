#include<stdio.h>
#define phi 3.14159265358979323846

float pangkat(float x, int n){	//fungsi pangkat
       if (n==0){
            return 1;
        }
		else if(n==1){
			return x;
    	}
		else{
            return x*pangkat(x,n-1);
		} 
}

int main(){
	int y;
	double sin=0.8415,cos=0.5403;
	double a,b,c,d,e,f,rad,xz,fsum;
	printf("||======================================================||\n");
	printf("||            Aproksimasi Cos(x) dengan Taylor          ||\n");
	printf("||======================================================||\n");
	printf("|| Nama \t: Kiki Yuniar Kristiawan                ||\n");
	printf("|| NPM \t\t: 17081010026                           ||\n");
	printf("|| Matakuliah \t: Metode Numerik                        ||\n");
	printf("|| Paralel \t: A                                     ||\n");
	printf("||======================================================||\n");
	printf("Masukkan nilai x (dalam radian) =  ");scanf("%lf", &rad);
	xz= rad*180/phi; // menjadikan derajat
	float p=rad-1;
	for (y=0;y<=5;y++){	// fungsi taylor Cos (x)
	
		if(y==0){
			a=cos;
		}
		else if(y==1){
			b=p*-1*sin;
		}
		else if (y==2){
			c=pangkat(p,2)*-1*cos/2;
		}
		else if(y==3){
			d=pangkat(p,3)*sin/6;
		}
		else if(y==4){
			e=pangkat(p,4)*cos/24;
		}
	}
	fsum = a+b+c+d+e;
	printf("Derajat Cos %lf\n",xz);
	printf("Hasil Aproksimasi = %lf",fsum);
}
