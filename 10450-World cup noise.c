/** Author: Sharmin Akter **/
/** Created at: 1/19/2014 1:52:30 AM **/

#include<stdio.h>

int main()
{
    long long i,j,n,s,fib[60];

    fib[0]=1;
    fib[1]=2;

    for(i=2; i<=51; i++)
        fib[i]=fib[i-1]+fib[i-2];
    scanf("%lld",&s);

    for(i=1; i<=s; i++)
    {
        scanf("%lld",&n);
        printf("Scenario #%lld:\n%lld\n\n",i,fib[n]);
    }
    return 0;
}
