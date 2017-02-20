/** Author: Sharmin Akter **/
/** Created at: 3/11/2012 9:51:02 PM **/

#include<stdio.h>
#include<string.h>

int main()
{
    char sen[10000],t,c;
    int i,l;

    while(gets(sen))
    {
        if(sen[0]=='*')
            break;
        t=sen[0];
        l=0;
        if(t>=65&&t<=90)
            c=t+32;
        else if(t>=97&&t<=122)
            c=t-32;
        for(i=1;i<strlen(sen);i++)
        {
            if(sen[i]==' ')
            {
                if(sen[i+1]!=t && sen[i+1]!=c)
                {
                    l=1;
                    break;
                }
            }
        }
        if(l==0)
            printf("Y\n");
        else
            printf("N\n");
    }
return 0;
}
