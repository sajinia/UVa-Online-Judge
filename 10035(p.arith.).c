/** Author: Sharmin Akter **/
/** Created at: 5/3/2011 12:54:34 AM **/

#include<stdio.h>
int main() {
unsigned a,b,c,d,s,t,m;
while(1) {
    scanf("%u%u",&a,&b);
    if(a==0&&b==0)
        break;
    s=0;t=0;
    while(a!=0||b!=0) {
        c=a%10;
        d=b%10;
        a=a/10;
        b=b/10;
        m=c+d+t;
        if(m>9) {
            s++;
            t=1;
            }
        else
            t=0;
    }
    if(s==0)
        printf("No carry operation.\n");
    else if(s==1)
        printf("1 carry operation.\n");
    else
        printf("%u carry operations.\n",s);
  }
return 0;
}
