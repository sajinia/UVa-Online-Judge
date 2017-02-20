/** Author: Sharmin Akter **/
/** Created at: 4/30/2011 11:25:20 PM **/

#include<stdio.h>
int main() {
long i,t,a,b;
scanf("%ld",&t);
if(t<15) {
for(i=1;i<=t;i++) {
    scanf("%ld%ld",&a,&b);
    if(a<b)
        printf("<\n");
    if(a>b)
        printf(">\n");
    if(a==b)
        printf("=\n");
    }
}
return 0;
}
