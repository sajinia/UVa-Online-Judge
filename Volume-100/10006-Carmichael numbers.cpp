/** Author: Sharmin Akter **/
/** Created at: 4/16/2012 11:59:22 PM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<set>
#include<iostream>
using namespace std;

#define limit 100000
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
    seive(70001);
    long i,j,c,p,n;
    vector<long> a;

    while(cin>>n)
    {
        set<long> s;
        if(n==0)
            break;
        p=n;
        i=0;
        c=0;
        j=0;
        while(v[i]*v[i]<=n)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                a.push_back(v[i]);
                s.insert(v[i]);
                c++;
            }
            i++;
        }
        if(n!=1)
        {
            a.push_back(n);
            s.insert(n);
            c++;
        }
        if(c>=3)
        {
            for(i=0;i<a.size();i++)
                if((p-1)%(a[i]-1)==0)
                    j++;
            if(j==a.size())
            {
                if(c==s.size())
                    cout<<"The number "<<p<<" is a Carmichael number."<<endl;
                else
                    cout<<p<<" is normal."<<endl;
            }
            else
                cout<<p<<" is normal."<<endl;
        }
        else
            cout<<p<<" is normal.\n";
        a.clear();
    }
return 0;
}
