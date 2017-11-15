/** Author: Sharmin Akter **/
/** Created at: 8/22/2013 3:29:56 AM **/

#include<stdio.h>

main()
{
    int x;

    while(scanf("%d",&x)==1)
    {
        if(x%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }
return 0;
}
