/** Author: Sharmin Akter **/
/** Created at: 5/2/2012 12:11:48 AM **/

#include<stdio.h>

int main()
{
    int i,c,t;

    while(scanf("%d",&i)==1)
    {
        t=0;
        if(i==0)
            break;
        for(c=1;c<=i;c++)
            t+=(c*c);
        printf("%d\n",t);
    }
return 0;
}
