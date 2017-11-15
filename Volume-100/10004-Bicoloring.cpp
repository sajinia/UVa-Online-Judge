/** Author: Sharmin Akter **/
/** Created at: 8/1/2012 11:50:42 PM **/

#include<stdio.h>
#include<string.h>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;

vector<int> v[210];
int flag[210],b;
queue<int> q;

int BFS(int a)
{
    for(int i=0;i<v[a].size();i++)
    {
        if(flag[v[a][i]]==-1)
        {
            if(flag[a]==0)
            {
                q.push(v[a][i]);
                flag[v[a][i]]=1;
            }
            else if(flag[a])
            {
                q.push(v[a][i]);
                flag[v[a][i]]=0;
            }
        }
        else if(flag[v[a][i]]==flag[a])
        {
            while(!q.empty())
                q.pop();
            b=0;
            printf("NOT BICOLORABLE.\n");
            break;
        }
    }
return b;
}
int main()
{
    int n,e,a,i,j;

    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>e;
        memset(flag,-1,sizeof(flag));

        for(i=0;i<e;i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        q.push(0);
        flag[0]=0;
        b=1;
        while(!q.empty())
        {
            a=q.front();
            b=BFS(a);
            if(b)
                q.pop();
        }
        if(b)
        {
            while(!q.empty())
                q.pop();
            printf("BICOLORABLE.\n");
        }
        for(i=0;i<210;i++)
            for(j=0;j<v[i].size();j++)
                v[i].clear();
    }
return 0;
}
