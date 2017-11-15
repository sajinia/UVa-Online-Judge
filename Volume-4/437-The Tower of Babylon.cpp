/** Author: Sharmin Akter **/
/** Created at: 12/15/2013 4:32:42 AM **/

#include<cstdio>
#include<math.h>
#include<sstream>
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

vector<int> u;
vector<pair<pair<int,int>,int> > v;

int LDS(int x)
{
    int i,maxi;

    if(u[x]!=-1)
        return u[x];
    maxi=0;
    for(i=x-1; i>=0; i--)
    {
        if((v[x].first.first>v[i].first.first) && (v[x].first.second>v[i].first.second))
            maxi=max(maxi,LDS(i));
    }
    return u[x]=maxi+v[x].second;
}

void input(int n)
{
    int i,a[3];

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a[0],&a[1],&a[2]);

        sort(a,a+3);

        v.push_back(make_pair(make_pair(a[0],a[1]),a[2]));
        v.push_back(make_pair(make_pair(a[1],a[2]),a[0]));
        v.push_back(make_pair(make_pair(a[0],a[2]),a[1]));
    }
    sort(v.begin(),v.end());

    return;
}
int main()
{
    int i,n,h,t=0;

    while(scanf("%d",&n)==1)
    {
        if(!n)
            break;

        input(n);
        h=0;

        for(i=0; i<v.size(); i++)
            u.push_back(-1);

        for(i=v.size()-1; i>=0; i--)
            h=max(h,LDS(i));

        printf("Case %d: maximum height = %d\n",++t,h);

        v.clear();
        u.clear();
    }
    return 0;
}
