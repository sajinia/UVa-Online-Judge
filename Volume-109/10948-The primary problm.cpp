/** Author: Sharmin Akter **/
/** Created at: 4/10/2012 10:38:04 PM **/

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
    prime[0]=0;
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
    long beg=0,end=78500,mid,i,j;

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
    long i,j,c,n,t;
    seive(1000001);

    while(cin>>n)
    {
        j=0;
        if(n==0)
            break;
        if(n%2==0)
            t=n-1;
        else
            t=n;
        while(prime[t]!=1)
            t-=2;
        c=bin_srch(t);
        for(i=0;i<=c;i++)
        {
            t=n-v[i];
            if(prime[t]==1)
            {
                cout<<n<<":\n"<<v[i]<<"+"<<t<<endl;
                j=1;
                break;
            }
        }
        if(j==0)
            cout<<n<<":\nNO WAY!\n";
    }
return 0;
}
