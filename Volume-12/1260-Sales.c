/** Author: Sharmin Akter **/
/** Created at: 4/30/2012 3:01:26 AM **/

#include<stdio.h>

int main()
{
    int i,j,f,k,n,t,a[1010];

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        f=0;
        scanf("%d",&n);

        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=1;j<n;j++)
        {
            for(k=j-1;k>=0;k--)
                if(a[k]<=a[j])
                    f++;
        }
        printf("%d\n",f);
    }
return 0;
}
