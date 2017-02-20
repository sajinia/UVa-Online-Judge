/** Author: Sharmin Akter **/
/** Created at: 11/24/2012 10:37:56 PM **/

#include<cstdio>
#include<vector>
#include<stack>
#include<algorithm>
#include<iostream>
using namespace std;

#define inf 9999999999999

long n,m=0;
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
    long i,j;
    stack<long> s;

    while(scanf("%ld",&n)==1)
        a.push_back(n);
    n=a.size();

    b.push_back(-inf);

    for(i=1;i<=n;i++)
        b.push_back(inf);

    printf("%ld\n-\n",LIS());

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

return 0;
}

