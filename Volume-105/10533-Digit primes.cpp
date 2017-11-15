/** Author: Sharmin Akter **/
/** Created at: 4/16/2012 10:38:58 PM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

#define limit 1500004
vector<long> v,p;
bool prime[limit];
long l,u;

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
void dig_prym(long range)
{
    long i,s,d;

    for(i=0;i<range;i++)
    {
        s=0;
        d=v[i];
        while(d!=0)
        {
            s+=d%10;
            d/=10;
        }
        if(prime[s]==1)
            p.push_back(v[i]);
    }
}
long bs(long item)
{
    long beg=0,end=30122,mid;

    mid=(beg+end)/2;

    while(beg<=end && p[mid]!=item)
    {
        if(item<p[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }

    if(p[mid]==item)
        return mid;
    else
    {
        if(item==l)
            return beg;
        else
            return end;
    }
}
int main()
{
    seive(1000001);
    dig_prym(78500);

    long i,j,c,m,n,t;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>u;
        if(l==u)
        {
            c=0;
            if(prime[l]==1)
            {
                while(l!=0)
                {
                    c+=l%10;
                    l/=10;
                }
                if(prime[c]==1)
                    cout<<"1"<<endl;
                else
                    cout<<"0"<<endl;
            }
            else
                cout<<"0"<<endl;
        }
        else
        {
            m=bs(l);
            n=bs(u);

            cout<<n-m+1<<endl;
        }
    }
return 0;
}
