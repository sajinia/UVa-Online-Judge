/** Author: Sharmin Akter **/
/** Created at: 4/23/2012 9:19:52 PM **/

#include<stdio.h>

int main()
{
    int i,h,m,t;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d:%d",&h,&m);

        if(h==12 && m==0)
            printf("%d:%d0\n",h,m);
        else
        {
            if(h==12)
                h=11;
            else
                h=11-h;
            m=60-m;
            if(m==60)
            {
                h++;
                m=0;
            }
            if(h==0)
                h=12;
            if(m<10&&h<10)
                printf("0%d:0%d\n",h,m);
            else if(m<10&&h>9)
                printf("%d:0%d\n",h,m);
            else if(m>9&&h<10)
                printf("0%d:%d\n",h,m);
            else
                printf("%d:%d\n",h,m);
        }
    }
return 0;
}
