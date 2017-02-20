/** Author: Sharmin Akter **/
/** Created at: 11/25/2012 1:47:58 AM **/

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<iostream>
using namespace std;

#define inf 9999999999

long n,m;
vector<long> a,b,c;

long bin_srch(long item)
{
    long beg=0,end=m,mid;

    while(beg<=end)
    {
        mid=(beg+end)/2;

        if(item<=b[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
return beg;
}
long LIS()
{
    long i,j;

    for(i=0;i<n;i++)
    {
        j=bin_srch(a[i]);
        b[j]=a[i];
        c.push_back(j);
        m=max(m,j);
    }
return m;
}

main()
{
    long i,j,t;
    string p;
    stack<long> s;

    scanf("%ld",&t);
    getchar();
    getchar();

    while(t--)
    {
        while(getline(cin,p))
        {
            if(p.empty())
				break;
            a.push_back(atoi(p.c_str()));
        }
        n=a.size();
        m=0;

        b.push_back(-inf);

        for(i=1;i<=n;i++)
            b.push_back(inf);

        printf("Max hits: %ld\n",LIS());

        for(i=0;i<n;i++)
            if(c[i]==m)
                break;

        for(j=i;j>=0;j--)
            if(c[j]==m)
            {
                s.push(a[j]);
                m--;
            }

        while(!s.empty())
        {
            printf("%ld\n",s.top());
            s.pop();
        }
        if(t)
            printf("\n");
        a.clear();
        b.clear();
        c.clear();
    }
return 0;
}


