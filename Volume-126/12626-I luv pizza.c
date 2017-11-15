/** Author: Sharmin Akter **/
/** Created at: 8/22/2013 1:09:36 AM **/

#include<stdio.h>

main()
{
    int i,j,t,n,a[30];
    char ch;

    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
    {
        for(j=0;j<30;j++)
            a[j]=0;
        n=0;

        while((ch=getchar())!='\n')
            a[ch-64]++;

        if(a[1]>=3 && a[7]>=1 && a[9]>=1 && a[13]>=1 && a[18]>=2 && a[20]>=1)
        {
            n=a[1]/3;
            if(a[7]<=n)
                n=a[7];
            if(a[9]<=n)
                n=a[9];
            if(a[13]<=n)
                n=a[13];
            if((a[18]/2)<=n)
                n=a[18]/2;
            if(a[20]<=n)
                n=a[20];
        }
        printf("%d\n",n);

    }
return 0;
}
