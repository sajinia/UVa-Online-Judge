/** Author: Sharmin Akter **/
/** Created at: 4/29/2012 9:47:42 PM **/

#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

#define limit 1500004
vector<long> v;
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
long bs(long item)
{
    long beg=0,end=114200,mid;

    mid=(beg+end)/2;
    while(beg<=end && v[mid]!=item)
    {
        if(item<v[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(v[mid]==item)
        return mid;
    else{
        if(item==l)
            return beg;
        else
            return end;
    }
}
int main()
{
    seive(1500001);
    long i,j,m,n,t,a[200],b[200];

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>u;

        m=bs(l);
        n=bs(u);
        memset(a,0,sizeof(a));
        if(m==n)
            cout<<"No jumping champion\n";
        else
        {
            for(j=m;j<n;j++)
                a[v[j+1]-v[j]]++;
            for(j=0;j<200;j++)
                b[j]=a[j];
            sort(b,b+200);
            if(b[199]==b[198])
                cout<<"No jumping champion\n";
            else
            {
                for(j=0;j<200;j++)
                {
                    if(b[199]==a[j])
                    {
                        cout<<"The jumping champion is "<<j<<endl;
                        break;
                    }
                }
            }
        }
    }
return 0;
}
