#include <stdio.h>

int main()
{
    int batas, tanda, i;
    float x, hasil, temp;
    temp = 1;
    hasil = 1;
    tanda = -1;
    i=0;
    printf("Masukkan x (dalam radian): ");
    scanf("%f", &x);
    printf("Masukkan batas: "); scanf("%d", &batas);
    for(int y=1 ; y<batas ; y++,tanda=-tanda)
        {
            i=i+2;
            temp = temp*((x*x)/(i*(i-1)));
            hasil = hasil +(tanda*temp);
        }
    printf("\nCos dari %1.0f adalah %f .\n\n", x, hasil);
}
