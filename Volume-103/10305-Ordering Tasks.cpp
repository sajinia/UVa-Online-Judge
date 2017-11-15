/** Author: Sharmin Akter **/
/** Created at: 11/4/2012 6:04:36 AM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;

vector<int> v[104];
stack<int> s;
bool flag[110];

void clear()
{
    memset(flag,false,sizeof(flag));

    for(int i=0;i<104;i++)
        v[i].clear();

    while(!s.empty())
        s.pop();
}
void input(int m)
{
    int i,j,p,q;

    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&p,&q);

        v[p].push_back(q);
    }
}
void DFS(int d)
{
    flag[d]=true;

    for(int i=0;i<v[d].size();i++)
        if(!flag[v[d][i]])
            DFS(v[d][i]);
    s.push(d);
    return;
}
main()
{
    int m,n,i,j,p,q;

    while(scanf("%d %d",&n,&m)==2)
    {
        if( n==0 && m==0 )
            break;
        clear();
        input(m);

        for(i=1;i<=n;i++)
        {
            if(!flag[i])
                DFS(i);
        }
        while(!s.empty())
        {
            printf("%d",s.top());

            if(s.size()==1)
                printf("\n");
            else
                printf(" ");
            s.pop();
        }
    }
return 0;
}
