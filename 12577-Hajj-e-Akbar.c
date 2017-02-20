/** Author: Sharmin Akter **/
/** Created at: 12/5/2012 7:34:40 PM **/

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10];
    int i,j,t=0;

    while(scanf("%s",&ch)==1)
    {
        if(ch[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",++t);
        else if(ch[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",++t);
        else
            break;
    }
return 0;
}
