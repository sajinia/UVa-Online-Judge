/** Author: Sharmin Akter **/
/** Created at: 4/13/2012 11:42:04 PM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

#define limit 10000004
vector<long long> v;
bool prime[limit];

void seive(long long lim)
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
    seive(10000001);
    long long i,p,n;
    vector<long long> a;

    while(cin>>n)
    {
        if(n==0)
            break;
        p=n;
        if(n<0)
            n*=-1;
        i=0;
        while(v[i]*v[i]<=n)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                a.push_back(v[i]);
            }
            i++;
        }
        if(n!=1)
            a.push_back(n);
        cout<<p<<" = ";
        if(p<0)
        {
            cout<<"-1";
            for(i=0;i<a.size();i++)
                cout<<" x "<<a[i];
            cout<<endl;
        }
        else
        {
            for(i=0;i<a.size();i++)
            {
                cout<<a[i];
                if(i!=a.size()-1)
                    cout<<" x ";
            }
            cout<<endl;
        }
        a.clear();
    }
return 0;
}
