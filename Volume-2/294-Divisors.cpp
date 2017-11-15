/** Author: Sharmin Akter **/
/** Created at: 12/6/2012 3:07:32 AM **/

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
int main()
{
    seive(1000001);
    long long i,j,k,l,u,p,d,c,m,n,t,a[99999],max;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>u;
        max=0;
        p=l;
        for(j=l;j<=u;j++)
        {
            memset(a,0,sizeof(a));
            n=j;
            k=0;
            d=1;
            while(v[k]*v[k]<=n)
            {
                while(n%v[k]==0)
                {
                    n/=v[k];
                    a[k]++;
                }
                k++;
            }
            if(n!=1)
                a[k]++;
            for(c=0;c<=k;c++)
            {
                if(a[c]>0)
                {
                    a[c]++;
                    d*=a[c];
                }
            }
            if(d>max)
            {
                p=j;
                max=d;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<p<<" has a maximum of "<<max<<" divisors."<<endl;
    }
return 0;
}
