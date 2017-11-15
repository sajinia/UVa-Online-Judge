/** Author: Sharmin Akter **/
/** Created at: 5/22/2012 3:30:44 PM **/

#include<stdio.h>
#include<math.h>

int main()
{
    double a,ma,ha,h,m;

    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0)
            break;
        ha=((h*30)+((m/60)*30));
        ma=(m*6);
        a=fabs(ha-ma);

        if(a>180)
            a=360-a;
        printf("%.3lf\n",a);
    }
return 0;
}
