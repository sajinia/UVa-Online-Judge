/** Author: Sharmin Akter **/
/** Created at: 4/11/2012 2:11:04 AM **/

#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

#define limit 20000004
map<long,long> m;
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
    j=1;
    for(i=3;i<=lim;i+=2)
    {
        if(prime[i]==1)
        {
            if(prime[i+2]==1)
            {
                m[j]=i;
                j++;
            }
        }
    }
}
int main()
{
    long n;
    seive(20000001);

    while(cin>>n)
    {
        if(m[n])
            cout<<"("<<m.find(n)->second<<", "<<m.find(n)->second+2<<")"<<endl;
    }
return 0;
}
