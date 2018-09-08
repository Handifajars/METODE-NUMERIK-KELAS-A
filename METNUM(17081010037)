#include <stdio.h>

float cos_deret_taylor(float x, int limit);

int main()
{
    int x, limit;
    printf("Input x *in radian* : ");
    scanf("%d", &x);
    printf("(if more the limit is more accurate )\n");
    printf("Input limit: "); 
	scanf("%d", &limit);
    printf("\nCos from %d is %f .\n\n", x, cos_deret_taylor(x, limit));
    }

float cos_deret_taylor(float x, int limit)
{
        float value = 1, temp =1;;
        int tanda = -1, i=0, y=1;
        
        while(y<limit){
            i+=2;
            temp *=(x*x)/(i*(i-1));
            value += tanda*temp;
            y++;
            tanda=-tanda;
        }
        return value;
}
