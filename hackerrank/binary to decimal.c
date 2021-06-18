#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long n,i=0,a[100];
    scanf("%lld",&n);
    
    do
    {
        a[i++]=n%2;
        n/=2;
        
    }
    while(n);
    while(i--)
    {
        printf("%lld",a[i]);
    }

       
    return 0;
}
