/** Author: Sharmin Akter **/
/** Created at: 9/8/2013 1:19:04 AM **/

#include<stdio.h>
#include<string.h>
#define sc scanf
#define pf printf

main()
{
    int i,j,k,m=1,n,t,r;
    char s[110][110];
    char c[16][110]={"Happy","birthday","to","you","Happy","birthday","to",
    "you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    sc("%d",&n);

    for(i=0;i<n;i++)
        sc("%s",s[i]);
    if(n>16)
    {
        r=n%16;
        if(r==0)
            m=n/16;
        else
            m=(n/16)+1;
    }
    for(i=0,j=0,k=0;j<16*m;i++,j++,k++)
    {
        if(i==n)
            i=0;
        if(k==16)
            k=0;
        pf("%s: %s\n",s[i],c[k]);
    }

return 0;
}
