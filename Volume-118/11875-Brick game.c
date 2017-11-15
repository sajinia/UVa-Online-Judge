/** Author: Sharmin Akter **/
/** Created at: 9/24/2011 7:52:06 AM **/

#include<stdio.h>
int main(){
    int t,n,a[15],i,c,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        c=a[n/2];
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
