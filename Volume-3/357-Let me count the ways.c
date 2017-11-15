/** Author: Sharmin Akter **/
/** Created at: 3/13/2012 12:36:50 AM **/

#include<stdio.h>
#include<string.h>

int main()
{
    long long i,j,m,n,a[]={1,5,10,25,50},c[40000];

    memset(c,0,sizeof(c));
    c[0]=1;
    for(i=0;i<5;i++)
    {
        n=a[i];
        for(j=n;j<=30000;j++)
            c[j]+=c[j-n];
    }
    while(scanf("%lld",&m)==1)
    {
        if(c[m]==1)
            printf("There is only 1 way to produce %lld cents change.\n",m);
        else
            printf("There are %lld ways to produce %lld cents change.\n",c[m],m);
    }
return 0;
}

