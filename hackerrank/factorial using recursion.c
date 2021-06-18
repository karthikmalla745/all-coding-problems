#include<stdio.h>
long long int factorial(long long int N)
{
	if(N>=1)
        return N*factorial(N-1);
    else
        return 1;

}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%lld", factorial(N));
	return 0;
}