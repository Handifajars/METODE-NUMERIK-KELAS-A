#include<stdio.h>
#define PI 3.14159
 
int main()
{
    int i; float drajat, sum=1, r=1;
    
    printf("==========APROKSIMASI COS (X)==========\n");
     
    printf(" Masukkan Derajat x : ");
    scanf("%f",&drajat);
     
    drajat=drajat*PI/180;
     
    for(i=1;i<=10;i++)
    {
        r=r*(-1)*drajat*drajat/(2*i*(2*i-1));
        sum=sum+r;
    }
    
     
    printf(" Nilai Cos dalam Radian => Cos(%f) = %.6f", drajat, sum);
}

