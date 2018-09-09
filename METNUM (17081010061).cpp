#include<stdio.h>

int main(){
		int x,e,m,z,n,o,y,i,f;
		double cos,sin,o1,h,h1,h2;
		
		printf("------------------------------------------------------------------------------------");
		printf("\nFrizal Aditya Junitio R.");
		printf("\n17081010061");
		printf("\n------------------------------------------------------------------------------------");
		
		
		//Inputan
		printf("\nMasukkan x = ");
		scanf("%d",&x);
		printf("Masukkan pembatas (epsilon) = ");
		scanf("%d",&e);
		
		//inisialisasi angka yang dibutuhkan
		z=x-1;//karena pada rumus (x-1)
		n=0;
		e=e-1;//karena epsilon yang pertama diluar loop
		
	sin=0.8415;
	cos=0.5403;
	
	//menampilkan yang pertama
	h1=cos;
	h2=h1;
	printf("hasil = %lf\n",h1);
	
		for(i=1;i<=e;i++){
			y=z;
			n=n+1;
			o=1;
			for(f=1;f<n;f++){
				y=y*z;//hasil perpangkatan
			}
			for(m=1;m<=n;m++){
				o=m*o;//faktorial
			}
			o1=o;
			h=y/o1;
			
			//Mencari mana yang cos atau sin
			if(n%2==0){
				h=h*cos;}
			else{
				h=h*sin;
			}
			
			//mencari mana yang dikali dengan 1 atau -1
			if(n==3 or n==4 or n==7 or n==8 or n==11 or n==12 or n==15 or n==16){
				h=h*1;
			}
			else if(n==1 or n==2 or n==5 or n==6 or n==9 or n==10 or n==13 or n==14){
				h=h*-1;
			}
			h2=h2+h;
			printf("hasil = %lf\n",h);
		}
		    printf("Jumlah penambahan seluruh hasil = %lf\n",h2);
		}
