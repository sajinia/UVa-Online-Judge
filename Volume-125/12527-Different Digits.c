/** Author: Sharmin Akter **/
/** Created at: 9/5/2013 1:51:40 AM **/

#include<stdio.h>
#include<string.h>

int r[5013];

void rep_dig()
{
    memset(r,0,sizeof(r));
    int i,j,a,b,c,d;

    for(i=11;i<=121;i+=11)
        r[i]=1;
    for(i=100;i<=5000;i+=100)
        r[i]=1;
    for(i=101;i<=999;i++)
        if(!r[i])
        {
            j=i;
            a=j%10;
            j/=10;
            b=j%10;
            j/=10;
            c=j%10;
            j/=10;

            if((a==b)||(b==c)||(c==a))
                r[i]=1;
        }
    for(i=1001;i<=4999;i++)
        if(!r[i])
        {
            j=i;
            a=j%10;
            j/=10;
            b=j%10;
            j/=10;
            c=j%10;
            j/=10;
            d=j%10;
            j/=10;

            if((a==b)||(b==c)||(c==d)||(d==a)||(a==c)||(b==d))
                r[i]=1;
        }
}
main()
{
    rep_dig();
    int i,x,y,z;

    while(scanf("%d %d",&x,&y)==2)
    {
        z=0;
        for(i=x;i<=y;i++)
            if(!r[i])
                z++;
        printf("%d\n",z);
    }
return 0;
}


