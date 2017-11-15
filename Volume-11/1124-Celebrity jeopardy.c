/** Author: Sharmin Akter **/
/** Created at: 4/23/2012 5:38:08 PM **/

#include<stdio.h>

int main()
{
    char ch;

    while((ch=getchar())!=EOF)
    {
        printf("%c",ch);

        while((ch=getchar())!='\n')
            printf("%c",ch);
        printf("\n");
    }
return 0;
}
