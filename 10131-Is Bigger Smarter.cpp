/** Author: Sharmin Akter **/
/** Created at: 12/1/2012 4:00:46 AM **/

#include<cstdio>
#include<math.h>
#include<cstring>
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int dp[1004];
vector<pair<int,int> > v,t;

void input()
{
    int a,b;

    while(scanf("%d %d",&a,&b)==2)
    {
        v.push_back(make_pair(a,b));
        t.push_back(make_pair(a,b));
    }
return;
}
bool cmp(pair<int,int> p,pair<int,int> q)
{
    if( p.first<q.first )
        return true;
    else if( p.first>q.first )
        return false;
    return p.second>q.second;
}
int LIS(int x)
{
    int i,maxi;

    if(dp[x]!=-1)
        return dp[x];
    maxi=0;
    for(i=x+1;i<v.size();i++)
    {
        if((v[x].first<v[i].first) && (v[x].second>v[i].second))
            maxi=max(maxi,LIS(i));
    }
    return dp[x]=maxi+1;
}
void output(int m)
{
    int i,j;

    printf("%d\n",m);

    for(i=0;i<v.size();i++)
    {
        if(dp[i]==m)
        {
            for(j=0;j<t.size();j++)
            {
                if((v[i].first==t[j].first) && (v[i].second==t[j].second))
                {
                    printf("%d\n",j+1);
                    break;
                }
            }
            m--;
        }
    }
return;
}
int main()
{
    int i,j,m=0;

    input();

    sort(v.begin(),v.end(),cmp);

    memset(dp,-1,sizeof(dp));

    for(i=0;i<v.size();i++)
        m=max(m,LIS(i));

    output(m);

return 0;
}
