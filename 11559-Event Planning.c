/** Author: Sharmin Akter **/
/** Created at: 9/12/2013 3:23:42 AM **/

#include<stdio.h>
#define sc scanf
#define pr printf

main()
{
    long i,j,h,p,w,r,s,x,b,m;

    while(sc("%ld %ld %ld %ld",&p,&b,&h,&w)==4)
    {
        x=0;
        for(i=0;i<h;i++)
        {
            sc("%ld",&r);
            for(j=0;j<w;j++)
            {
                sc("%ld",&s);

                if(s>=p && r*p<=b)
                    if(x==0||x>r*p)
                        x=r*p;
            }
        }
        pr(x==0? "stay home\n" : "%ld\n",x);
    }

return 0;
}
