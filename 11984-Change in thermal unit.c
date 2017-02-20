/** Author: Sharmin Akter **/
/** Created at: 10/23/2012 8:01:50 PM **/

#include<stdio.h>
int main() {
    float c,f,d;
    long i,t;
    scanf("%ld",&t);
    for(i=1;i<=t;i++) {

        scanf("%f %f",&c,&d);

        f=(9*c)/5+32;
        f=f+d;
        c=5*(f-32)/9;
        printf("Case %ld: %.2f\n",i,c);
    }
    return 0;
}
