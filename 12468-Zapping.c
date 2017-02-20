/** Author: Sharmin Akter **/
/** Created at: 9/6/2012 2:05:58 AM **/

#include<stdio.h>
#include<math.h>

main()
{
    int a,b,d;

    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        d=abs(a-b);

        if(d>50)
            printf("%d\n",100-d);
        else
            printf("%d\n",d);
    }
return 0;
}
