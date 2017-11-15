/** Author: Sharmin Akter **/
/** Created at: 5/1/2012 10:32:04 PM **/

#include<stdio.h>
#include<string.h>

int main()
{
    int i,b=16,n,t;
    char ch[39],h[39];

    while(gets(ch))
    {
        n=0;
        if(ch[0]=='-')
            break;
        t=strlen(ch);

        if(ch[0]=='0' && ch[1]=='x')
        {
            for(i=2;i<t;i++)
            {
                if(ch[i]>='A' && ch[i]<='F')
                    ch[i]-=55;
                else
                    ch[i]-=48;
                n=n*b+ch[i];
            }
            printf("%d\n",n);
        }
        else
        {
            n=atoi(ch);
            printf("0x%X\n",n);
        }
    }
return 0;
}
