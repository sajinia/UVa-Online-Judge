/** Author: Sharmin Akter **/
/** Created at: 9/6/2012 1:36:38 AM **/

#include<math.h>
#include<stdio.h>
#include<string.h>

char s[999999999];

int space(int p)
{
    int i=0;
    while(s[p]==' ')
    {
        i++;
        p++;
    }
    return i;
}
main()
{
    int i,p,max;
    float q;

    while(gets(s))
    {
        i=0;
        max=1;
        while(i<strlen(s))
        {
            p=i;
            if(s[p]==' ' && s[p+1]==' ')
            {
                i=space(p);
                if(i>max)
                    max=i;
                i+=p;
            }
            else
                i++;
        }
        if(max>1)
        {
            p=(log10(max)/log10(2));
            q=(float)(log10(max)/log10(2));
            if(q>p)
                printf("%d\n",p+1);
            else
                printf("%d\n",p);
        }
        else
            printf("0\n");
    }
return 0;
}
