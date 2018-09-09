#include<stdio.h>

int main(){
		int  a,b,c,input,epsilon,temp,faktorial,x,y;
		double faktorial1,cos,sin,hasilpertama,hasiltemp,hasilakhir;
		
		printf("Masukkan Inputan = ");
		scanf("%d",&input);
		printf("\nMasukkan Epsilon (Epsilon maksimal 10) = ");
		scanf("%d",&epsilon);
		
		if(epsilon<=10){

			x=input-1; //Untuk (x-1)
			temp=0; //Untuk pembatas
			epsilon=epsilon-1;
		
			//inisialisasi cos dan sin
			cos=0.5403;
			sin=0.8415;
		
			//karena yang pertama dalam deret taylor hanya cos
			hasilpertama=cos;
			hasilakhir=hasilpertama;
			printf("hasil = %lf\n",hasilpertama);
			a=1;
	
	
			while(a<=epsilon){
				y=x;
				temp=temp+1;
				faktorial=1;
				for(b=1;b<temp;b++){
					y=y*x;
				}
				
				for(c=1;c<=temp;c++){
					faktorial=c*faktorial;
				}
				
				faktorial1=faktorial;
				hasiltemp=y/faktorial1;
				
				if(temp%2==0){
					hasiltemp=hasiltemp*cos;}
				else{
					hasiltemp=hasiltemp*sin;
				}
				
				if(temp==3 or temp==4 or temp==7 or temp==8){
					hasiltemp=hasiltemp*1;
				}
				else if(temp==1 or temp==2 or temp==5 or temp==6 or temp==9 or temp==10){
					hasiltemp=hasiltemp*-1;
				}
				
				printf("hasil = %lf\n",hasiltemp);
				a++;
				hasilakhir=hasilakhir+hasiltemp;
			}
		    	printf("hasil akhir = %lf\n",hasilakhir);
		}
		else{
			printf("ERROR");
		}
}
