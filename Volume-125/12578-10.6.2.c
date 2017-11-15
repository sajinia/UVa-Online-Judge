/** Author: Sharmin Akter **/
/** Created at: 12/5/2012 10:03:18 PM **/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pi ((2)*(acos(0)))

int main()
{
    int i,j,l,t;
    double r,a,c;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&l);

        r=(double)(l/5.0);
        c=pi*r*r;
        a=(double)(r*3.0*l);
        printf("%.2lf %.2lf\n",c,a-c);
    }
return 0;
}
