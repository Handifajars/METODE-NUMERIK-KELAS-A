#include <stdio.h>

int main()
{
    int limit, mark, a;
    float x, value, temp;
    temp = 1;
    value = 1;
    mark = -1;
    a=0;
    
    printf("Input x: ");
    scanf("%f", &x);
    printf("Input Limit: "); scanf("%d", &limit);
    
    int y=1;
    while(y<limit){
    	 a=a+2;
        temp = temp*((x*x)/(a*(a-1)));
        value = value +(mark*temp);
        y++;
        mark =- mark;
	}
   
    printf("\nCos %1.0f = %f .\n\n", x, value);
}
