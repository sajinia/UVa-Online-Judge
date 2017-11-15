/** Author: Sharmin Akter **/
/** Created at: 5/1/2012 9:54:10 PM **/

#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,s,t,a[40000],b[40000],p;

    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        memset(b,0,sizeof(b));
        vector<int> v[40000];
        queue<int> q;
        s=1;

        for(j=1;j<=m;j++)
        {
            cin>>t;
            memset(a,0,sizeof(a));
            for(k=0;k<t;k++)
                cin>>a[k];
            sort(a,a+t);
            for(k=0;k<t;k++)
            {
                for(l=0;l!=k,l<t;l++)
                    v[a[k]].push_back(a[l]);
            }
        }
        q.push(0);
        while(!q.empty())
        {
            p=q.front();
            b[p]=1;
            for(i=0;i<v[p].size();i++)
            {
                if(b[v[p][i]]==0)
                {
                    q.push(v[p][i]);
                    b[v[p][i]]=1;
                    s++;
                }
            }
            q.pop();
        }
        printf("%d\n",s);
    }
return 0;
}
