/** Author: Sharmin Akter **/
/** Created at: 5/8/2012 1:37:50 AM **/

#include<stdio.h>

int main()
{
    int i,j,k,c[110],t,n,d[51];

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        for(i=1;i<=n;i++)
            c[i]=i;
        i=1;
        j=n+1;
        k=1;
        while(k<n)
        {
            d[k]=c[i];
            c[j]=c[i+1];
            i+=2;
            j++;
            k++;
        }
        printf("Discarded cards:");
        for(i=1;i<n;i++)
        {
            printf(" %d",d[i]);
            if(i!=n-1)
                printf(",");
        }
        printf("\nRemaining card: %d\n",c[j-1]);
    }
return 0;
}

