#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, result;
    printf("Enter x:");
    scanf("%lf",&x);
    if( x>=-5 && x<1 )
    {
        result=2*pow(x,2)-exp(-1*x)+1;
    }
    else if(x>=1&&x<100)
    {
        result=sqrt(2*x+1)-4/sqrt(4*x+1);
    }
    else if(x>=100&& x<=1000)
    {
        result=2*log10(2*x)-pow(x,2)/4;
    }
    else
    {
        result=-1;
    }
    printf("Result:%.2lf",result);
    return(0);
}
