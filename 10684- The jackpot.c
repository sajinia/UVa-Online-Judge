/** Author: Sharmin Akter **/
/** Created at: 12/6/2012 2:16:58 AM **/

#include<stdio.h>
#define max(a,b) ((a)>(b))?(a):(b)

long v[10010],dp[10010],n;

long max_sum(long i)
{
    if(dp[i-1]>=0)
        return dp[i]=v[i]+dp[i-1];
    return dp[i]=v[i];
}
int main()
{
    long i,j,n,t;

    while(scanf("%ld",&n)==1)
    {
        if(!n)
            break;
        for(i=0;i<n;i++)
            scanf("%ld",&v[i]);

        dp[0]=v[0];
        j=dp[0];
        for(i=1;i<n;i++)
            j=max(j,max_sum(i));
        if(j>0)
            printf("The maximum winning streak is %ld.\n",j);
        else
            printf("Losing streak.\n");
    }
return 0;
}
