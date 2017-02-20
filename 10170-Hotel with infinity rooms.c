/** Author: Sharmin Akter **/
/** Created at: 3/8/2012 12:06:58 AM **/

#include<stdio.h>

int main(){

    long long s,d;

    while(scanf("%lld %lld",&s,&d)==2)
    {
        while(d>0)
        {
            d-=s;
            s++;
        }
        printf("%lld\n",s-1);
    }
return 0;
}
