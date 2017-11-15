/** Author: Sharmin Akter **/
/** Created at: 5/2/2012 2:57:08 AM **/

#include<stdio.h>

int main()
{
    long long a,b,c=1,i,t,n;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        t=0;
        n=0;
        for(i=1;i<a;i++)
            t+=i;
        for(i=1;i<b;i++)
            n+=i;
        printf("Case %lld: %lld\n",c,(t*n));
        c++;
    }
return 0;
}
