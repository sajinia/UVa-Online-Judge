/** Author: Sharmin Akter **/
/** Created at: 12/3/2012 1:11:50 AM **/

#include<stdio.h>
#include<string.h>

#define inf 2147483648
#define min(x,y) ((x)<(y))?(x):(y)
#define max(x,y) ((x)>(y))?(x):(y)

long a[10010],b[10010],c[10010],d[10010],n,m;

long bin_srch(long item)
{
    long beg=0,end=m,mid;

    while(beg<=end)
    {
        mid=(beg+end)/2;

        if(item<=b[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    b[beg]=item;

return beg;
}
void value()
{
    long i;

    b[0]=-inf;

    for(i=1;i<=n;i++)
        b[i]=inf;
return;
}
void LIS()
{
    long j,s;
    m=0;

    for(j=0;j<n;j++)
    {
        s=bin_srch(a[j]);
        m=max(m,s);
        c[j]=s;
    }
    value();
return;
}
void LDS()
{
    long i,j,s;
    m=0;

    for(i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        s=bin_srch(a[i]);
        m=max(m,s);
        d[i]=s;
    }
return;
}
void output()
{
    long i,w=0,p;

    for(i=0;i<n;i++)
        w=max(w,min(c[i],d[i]));

    p=(2*w)-1;

    printf("%ld\n",p);

return;
}
int main()
{
    long i;

    while(scanf("%ld",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);

        value();
        LIS();

        LDS();
        output();
    }
return 0;
}
