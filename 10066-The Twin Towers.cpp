/** Author: Sharmin Akter **/
/** Created at: 9/26/2013 9:07:10 PM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 104

int len[MAX][MAX],a[MAX],b[MAX],m,n;

int LCS()
{
    int i,j;
    memset(len,0,sizeof(len));

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                len[i+1][j+1]=len[i][j]+1;
            else
                len[i+1][j+1]=max(len[i][j+1],len[i+1][j]);
        }
    }
    return len[m][n];
}
int main()
{
    int i,t=1;

    while(cin>>m>>n)
    {
        if(!m)
            break;
        for(i=0;i<m;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",t++,LCS());
    }
return 0;
}
