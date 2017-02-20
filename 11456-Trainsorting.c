/** Author: Sharmin Akter **/
/** Created at: 12/3/2012 2:31:50 AM **/

#include<stdio.h>
#include<string.h>

#define max(a,b) ((a)>(b))?(a):(b)

long v[2012],b[2012],d[2012],p[2012],n;

long LIS(long x)
{
    long i,maxi;

    if(b[x]!=-1)
        return b[x];
    maxi=0;

    for(i=x+1;i<n;i++)
    {
        if(v[x]<v[i])
            maxi=max(maxi,LIS(i));
    }
    return b[x]=1+maxi;
}

long LDS(long x)
{
    long i,maxi;

    if(b[x]!=-1)
        return b[x];
    maxi=0;

    for(i=x+1;i<n;i++)
    {
        if(v[x]>v[i])
            maxi=max(maxi,LDS(i));
    }
    return b[x]=1+maxi;
}
void input()
{
    long j;

    scanf("%ld",&n);

    for ( j=0; j<n ;j++ )
        scanf("%ld",&v[j]);
return;
}
void process()
{
    long i;

    memset(b,-1,sizeof(b));

    for(i=0;i<n;i++)
        d[i]=LIS(i);

    memset(b,-1,sizeof(b));

    for(i=0;i<n;i++)
        p[i]=LDS(i);

return;
}
void output()
{
    long i,j=0;

    for(i=0;i<n;i++)
        j=max(j,(d[i]+p[i]-1));

    printf("%ld\n",j);

return;
}
int main()
{
    long i,t;

    scanf("%ld",&t);

    for ( i=1; i<=t ;i++ )
    {
        input();

        process();

        output();
    }
return 0;
}
