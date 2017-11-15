/** Author: Sharmin Akter **/
/** Created at: 4/10/2012 10:21:04 PM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

#define limit 1000004
vector<long> v;
bool prime[limit];

void seive(long lim)
{
    long i,j;

    memset(prime,1,sizeof(prime));
    prime[1]=0;

    for(i=2;i*i<=lim;i++)
    {
        if(prime[i]==1)
        {
            for(j=i+i;j<=lim;j+=i)
                prime[j]=0;
        }
    }
    for(i=2;i<=lim;i++)
        if(prime[i]==1)
            v.push_back(i);
}
long bin_srch(long item)
{
    long beg=0,end=4000,mid;

    mid=(beg+end)/2;
    while(beg<=end && v[mid]!=item)
    {
        if(item<v[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
return mid;
}
int main()
{
    long i,j,c,n,t,a[40000];
    seive(1000001);

    while(cin>>n)
    {
        j=0;
        memset(a,0,sizeof(a));
        if(n==0)
            break;
        t=n-1;
        while(prime[t]!=1)
            t-=2;
        c=bin_srch(t);
        for(i=0;i<=c;i++)
        {
            t=n-v[i];
            if(prime[t]==1)
            {
                if(a[t]==0&&a[v[i]]==0)
                    j++;
                a[t]=1;
                a[v[i]]=1;
            }
        }
        cout<<j<<endl;
    }
return 0;
}
