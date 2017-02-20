/** Author: Sharmin Akter **/
/** Created at: 4/10/2012 12:37:28 AM **/

#include<stdio.h>
#include<string.h>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int i,j,a,n,e,c,s,d,l,r,flag[40],parent[40],t=1;
    vector<int> v[40];
    queue<int> q;
    while(cin>>n)
    {
        for(j=1;j<=n;j++)
        {
            cin>>e;
            v[1].push_back(e);
            v[e].push_back(1);
        }
        for(i=2;i<=19;i++)
        {
            cin>>n;
            for(j=1;j<=n;j++)
            {
                cin>>e;
                v[i].push_back(e);
                v[e].push_back(i);
            }
        }
        cin>>c;
        for(j=1;j<=c;j++)
        {
            l=0;
            memset(flag,0,sizeof(flag));
            memset(parent,-1,sizeof(parent));
            cin>>s>>d;
            r=d;
            q.push(s);
            while(!q.empty())
            {
                a=q.front();
                flag[a]=true;
                if(a==d)
                    break;
                for(i=0;i<v[a].size();i++)
                {
                    if(flag[v[a][i]]==0)
                    {
                        q.push(v[a][i]);
                        flag[v[a][i]]=true;
                        parent[v[a][i]]=a;
                    }
                }
                q.pop();
            }
            while(d!=-1)
            {
                d=parent[d];
                l++;
            }
            if(j==1)
                cout<<"Test Set #"<<t<<endl;
            printf("%2d to %2d: %d\n",s,r,l-1);
            while(!q.empty())
                q.pop();
        }
        cout<<endl;
        t++;
        for(i=0;i<40;i++)
            v[i].clear();
    }
return 0;
}
