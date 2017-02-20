/** Author: Sharmin Akter **/
/** Created at: 9/16/2013 1:08:02 AM **/

#include<stdio.h>

int main()
{
    int i,j,m,f,s,b,t=1,n;

    while(scanf("%d %d",&b,&s)==2)
    {
        if(b==0)
            break;
        if(b>s)
        {
            n=100;
            for(i=0;i<b;i++)
            {
                scanf("%d",&m);
                if(m<n)
                    n=m;
            }
            for(i=0;i<s;i++)
                scanf("%d",&f);
            printf("Case %d: %d %d\n",t,b-s,n);
        }
        else
        {
            for(i=0;i<b;i++)
                scanf("%d",&m);
            for(i=0;i<s;i++)
                scanf("%d",&f);
            printf("Case %d: 0\n",t);
        }
        t++;
    }
return 0;
}
