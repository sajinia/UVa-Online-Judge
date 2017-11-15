/** Author: Sharmin Akter **/
/** Created at: 8/22/2013 2:18:08 AM **/

#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,t;
    char a,b,c,x,y,z,f;

    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
    {
        m=0;
        n=0;
        a=getchar();
        b=getchar();
        c=getchar();

        m=(((a-65)*676) + ((b-65)*26) + (c-65));

        getchar();
        x=getchar();
        y=getchar();
        z=getchar();
        f=getchar();

        n=(((x-48)*1000) + ((y-48)*100) + ((z-48)*10) + (f-48));

        j=abs(m-n);

        if(j<=100)
            printf("nice\n");
        else
            printf("not nice\n");
        getchar();
    }
return 0;
}
