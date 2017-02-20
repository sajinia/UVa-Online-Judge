/** Author: Sharmin Akter **/
/** Created at: 5/12/2012 11:24:02 PM **/

#include<stdio.h>
int main()
{
    long i,j,p;

    while(scanf("%ld %ld",&i,&j)==2)
    {
        if(i>j)
            p=i-j;
        else
            p=j-i;
        printf("%ld\n",p);
    }
return 0;
}
