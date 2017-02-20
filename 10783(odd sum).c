/** Author: Sharmin Akter **/
/** Created at: 10/20/2012 2:13:10 AM **/

#include<stdio.h>
int main() {
    long a,b,i,j,n,s,t;
    scanf("%ld",&t);
           for(i=1;i<=t;i++) {
               scanf("%ld%ld",&a,&b);
            if(a>b) {
                n=a;
                a=b;
                b=n;
                }
            s=0;
            for(j=a;j<=b;j++) {
                if(j%2==1)
                    s=s+j;
            }
            printf("Case %ld: %ld\n",i,s);
        }

return 0;
}
