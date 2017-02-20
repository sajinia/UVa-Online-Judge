/** Author: Sharmin Akter **/
/** Created at: 5/1/2012 3:27:00 AM **/

#include<stdio.h>
#include<string.h>

char s[1000020],t[1010];

int main(){

	int i,j,k,p,b;

	scanf("%d",&k);
	getchar();

	for(i=1;i<=k;i++)
	{
	    gets(s);
	    scanf("%d",&p);
	    getchar();

	    for(j=1;j<=p;j++)
	    {
	        gets(t);
            b=(int)strstr(s,t);

            if(b==0)
                printf("n\n");
            else
                printf("y\n");
	    }
	}
return 0;
}
