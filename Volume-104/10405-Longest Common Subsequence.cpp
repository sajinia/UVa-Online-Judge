/** Author: Sharmin Akter **/
/** Created at: 11/23/2012 1:40:30 AM **/

#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int i,j,m,n;
    char s[1010],t[1010];

    while(gets(s))
    {
        gets(t);

        m=strlen(s);
        n=strlen(t);

        int len[m+1][n+1];
        memset(len,0,sizeof(len));

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[i]==t[j])

                    len[i+1][j+1]=len[i][j]+1;
                else
                    len[i+1][j+1]=max(len[i][j+1],len[i+1][j]);

            }
        }
        printf("%d\n",len[m][n]);
    }
return 0;
}

