#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
    int i, n;
    float x, sum=1, t=1;
    system("cls");
     
    printf(" Masukkan Nilai (Derajat) : ");
    scanf("%f",&x);//Fungsi untuk menyimpan inputan darix)
    
    
    x=x*3.14159/180;//fungsi dimana inputan dari user diproses diubah menjadi nilai radian
    
	for(i=1;i<=10;i++)//proses looping
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
     
    printf(" Maka Hasil Dari Cos(%f) Adalah : %.8f", x, sum);//menampilkan hasil dari nilai cos radian
    printf("\nTerima Kasih !");
    getch();
}
