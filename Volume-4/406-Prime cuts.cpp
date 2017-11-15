/** Author: Sharmin Akter **/
/** Created at: 12/22/2013 4:49:24 AM **/

#include<vector>
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

bool prime[1010];
vector<int> v;

void seive(int limit)
{
    int i,j;

    memset(prime,1,sizeof(prime));

    for(i=2; i*i<=limit; i++)
    {
        if(prime[i]==1)
        {
            for(j=i+i; j<=limit; j+=i)
                prime[j]=0;
        }
    }
    for(i=1; i<=limit; i++)
    {
        if(prime[i]==1)
            v.push_back(i);
    }
}
int main()
{
    int i,j,n,c,p,r,beg,mid,end;

    seive(1001);
    while(cin>>n)
    {
        cin>>c;
        p=0;
        for(i=1; i<=n; i++)
        {
            if(prime[i]==1)
                p++;
        }
        if(p&1)
        {
            r=(c*2)-1;
            if(r>=p)
            {
                cout<<n<<" "<<c<<":";
                for(j=0; j<p; j++)
                    cout<<" "<<v[j];
                cout<<endl<<endl;
            }
            else
            {
                mid=(p/2)+1;
                beg=mid-((r-1)/2)-1;
                end=mid+((r-1)/2);

                cout<<n<<" "<<c<<":";
                for(j=beg; j<end; j++)
                    cout<<" "<<v[j];
                cout<<endl<<endl;
            }
        }
        else
        {
            r=2*c;
            if(r>=p)
            {
                cout<<n<<" "<<c<<":";
                for(j=0; j<p; j++)
                    cout<<" "<<v[j];
                cout<<endl<<endl;
            }
            else
            {
                beg=(p/2)-c;
                end=(p/2)+c;

                cout<<n<<" "<<c<<":";
                for(j=beg; j<end; j++)
                    cout<<" "<<v[j];
                cout<<endl<<endl;
            }
        }
    }
    return 0;
}
