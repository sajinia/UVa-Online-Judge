/** Author: Sharmin Akter **/
/** Created at: 11/22/2012 3:28:38 AM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<long> d,p,v;

long LIS(long x)
{
    long i,maxi;
    if(d[x]!=-4)
        return d[x];
    maxi=0;
    for(i=x+1;i<v.size();i++)
    {
        if(v[x]<v[i])
            maxi=max(maxi,LIS(i));
    }
    return d[x]=1+maxi;
}

long LDS(long x)
{
    long i,maxi;
    if(p[x]!=-4)
        return p[x];
    maxi=0;
    for(i=x+1;i<v.size();i++)
    {
        if(v[x]>v[i])
            maxi=max(maxi,LDS(i));
    }
    return p[x]=1+maxi;
}

main()
{
    long i,ld,li,m,n,t=0;

    while(scanf("%ld",&m)==1)
    {
        if(m==-1)
            break;
        v.push_back(m);

        while(scanf("%ld",&n)==1)
        {
            if(n==-1)
                break;
            v.push_back(n);
        }
        for(i=0;i<v.size();i++)
            d.push_back(-4);
        for(i=0;i<v.size();i++)
            p.push_back(-4);
        li=0;
        ld=0;

        for(i=0;i<v.size();i++)
            li=max(li,LIS(i));

        for(i=0;i<v.size();i++)
            ld=max(ld,LDS(i));

        if(t)
            printf("\n");

        printf("Test #%ld:\n  maximum possible interceptions: %ld\n",++t,max(li,ld));

        v.clear();
        d.clear();
        p.clear();
    }
return 0;
}


