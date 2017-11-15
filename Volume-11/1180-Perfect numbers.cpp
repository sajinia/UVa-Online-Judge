/** Author: Sharmin Akter **/
/** Created at: 4/29/2012 11:53:36 PM **/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

#define limit 300004
vector<long long> v;
bool prime[limit];

void seive(long long lim)
{
    long long i,j;

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
long long bs(long long item)
{
    long long beg=0,end=26000,mid;

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
        return 1;
    else
        return 0;
}
int main()
{
    seive(300001);
    long long i,j,k,p,m,n,t;

    while(cin>>t){

    vector<long long> c;

    for(i=1;i<=t;i++)
    {
        cin>>p;
        c.push_back(p);
        getchar();
    }
    for(i=0;i<c.size();i++)
    {
        if(c[i]==17||c[i]==19)
            cout<<"Yes"<<endl;
        else
        {
            t=bs(c[i]);
            if(t)
            {
                m=pow(2,c[i])-1;
                t=bs(m);
                if(t)
                {
                    n=pow(2,(c[i]-1));
                    k=m*n;
                    if(k%2==0)
                    {
                        p=0;
                        for(j=1;j<=k/2;j++)
                        {
                            if(k%j==0)
                                p+=j;
                        }
                        if(p==k)
                            cout<<"Yes"<<endl;
                        else
                            cout<<"No"<<endl;
                    }
                    else
                        cout<<"No"<<endl;
                }
                else
                    cout<<"No"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }
    }
return 0;
}
