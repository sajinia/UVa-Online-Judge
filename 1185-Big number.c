/** Author: Sharmin Akter **/
/** Created at: 4/23/2012 8:42:42 PM **/

#include<stdio.h>
#include<math.h>

double count_digit(long a)
{
    double sum;
    long i;

    if(a==0)
        return 1;
    else
    {
        sum=0;
        for(i=1;i<=a;i++)
            sum+=log10(i);
        return floor(sum)+1;
    }
}
int main()
{
    double sum;
    long n,i,t;

    scanf("%ld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);

        sum=count_digit(n);
        printf("%.0lf\n",sum);
    }
return 0;
}
