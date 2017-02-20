/** Author: Sharmin Akter **/
/** Created at: 12/4/2012 1:42:46 AM **/

#include<cstdio>
#include<string.h>
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int dp[10010];
vector<pair<int,int> > v;

int LIS(int x)
{
    int i,maxi=0;

    if(dp[x]!=-1)
        return dp[x];

    for(i=x+1;i<v.size();i++)
    {
        if((v[x].first<=v[i].first) && (v[x].second<=v[i].second))
            maxi=max(maxi,LIS(i));
    }
    return dp[x]=maxi+1;
}

void input(int n)
{
    int i,a,b;

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

return;
}

int main()
{
    int i,n,h;

    while(scanf("%d",&n)==1)
    {
        if(!n)
            break;

        input(n);
        h=0;

        memset(dp,-1,sizeof(dp));

        for(i=0;i<v.size();i++)
            h=max(h,LIS(i));

        printf("%d\n",h);

        v.clear();
    }
    printf("*\n");
return 0;
}

