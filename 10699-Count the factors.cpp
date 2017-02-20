/** Author: Sharmin Akter **/
/** Created at: 4/19/2012 1:37:14 AM **/

#include<stdio.h>
#include<set>
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
    v.push_back(2);

    for(i=3;i*i<=lim;i+=2)
    {
        if(prime[i]==1)
        {
            for(j=i*i;j<=lim;j+=(i*2))
                prime[j]=0;
        }
    }
    for(i=3;i<=lim;i+=2)
        if(prime[i]==1)
            v.push_back(i);
}
int main()
{
    seive(1000001);
    long i,p,n;

    while(cin>>n)
    {
        if(n==0)
            break;
        set<long> s;
        p=n;
        i=0;
        while(v[i]*v[i]<=n)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                s.insert(v[i]);
            }
            i++;
        }
        if(n!=1)
            s.insert(n);
        cout<<p<<" : "<<s.size()<<endl;
    }
return 0;
}
