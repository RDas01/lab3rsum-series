#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, xm1=0, d=2, n=0, rsum = 0;
    printf("The series is:\n%d\n", xm1);
    while(n<=10){
    x = xm1 + d;
    d = x - xm1;
    printf("%d\n", x);
    rsum = 2 + rsum + xm1;
    xm1 = x;
    n++;
    }
    printf("running sum: %d", rsum);
    return 0;
}
