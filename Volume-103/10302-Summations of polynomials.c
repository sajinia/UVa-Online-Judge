/** Author: Sharmin Akter **/
/** Created at: 7/27/2012 3:14:16 PM **/

#include<stdio.h>
int main() {
long i,n,c,s;
while(scanf("%ld",&n)==1) {
    s=0;
    for(i=1;i<=n;i++) {
        c=i*i*i;
        s=s+c;
        }
    printf("%ld\n",s);
    }
return 0;
}
