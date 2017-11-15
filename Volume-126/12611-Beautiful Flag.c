/** Author: Sharmin Akter **/
/** Created at: 8/22/2013 2:50:44 AM **/

#include<stdio.h>

main()
{
    int i,j,t,r,x,y,l,w;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&r);

        if(r<1)
            printf("Case %d:\n0 0\n0 0\n0 0\n0 0\n",i);
        else
        {
            l=r*5;
            w=r*3;
            x=(45*l)/100;
            y=(55*l)/100;

        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i,x,w/2,y,w/2,y,w/2,x,w/2);
        }
    }

return 0;
}
