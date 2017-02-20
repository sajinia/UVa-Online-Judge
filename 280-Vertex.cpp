/** Author: Sharmin Akter **/
/** Created at: 11/20/2012 12:37:10 AM **/

#include<cstdio>
#include<cstring>
#include<vector>
#include<set>
#include<iostream>
using namespace std;

vector<int> v[504];
bool flag[504];

set<int> s;
set<int>::iterator it;

int start[510],vertx,x;

void clear()
{
    memset(start,0,sizeof(start));

    for(int i=0;i<504;i++)
        v[i].clear();
}
void DFS(int vr)
{
    flag[vr]=true;

    for(int i=0;i<v[vr].size();i++)
    {
        if(v[vr][i]==vr||v[vr][i]==x)
            s.erase(v[vr][i]);
        if(!flag[v[vr][i]])
        {
            s.erase(v[vr][i]);
            DFS(v[vr][i]);
        }
    }
return;
}
void traverse(int vrtx)
{
    int i;
    s.clear();
    memset(flag,false,sizeof(flag));

    for(i=1;i<=vertx;i++)
        s.insert(i);
    x=vrtx;

    DFS(vrtx);

    printf("%d",s.size());

    for(it=s.begin(); it!=s.end(); it++)
        printf(" %d",*it);

    printf("\n");
return;
}
void input()
{
    int i,n,edge,strt_vertx;

    while(scanf("%d",&strt_vertx)==1)
    {
        if(!strt_vertx)
            break;
        while(scanf("%d",&edge)==1)
        {
            if(!edge)
                break;
            v[strt_vertx].push_back(edge);
        }
    }
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&start[i]);

    for(i=0;i<n;i++)
        traverse(start[i]);
return;
}
main()
{

    while(scanf("%d",&vertx)==1)
    {
        if(!vertx)
            break;
        clear();

        input();
    }
return 0;
}
