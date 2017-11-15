/** Author: Sharmin Akter **/
/** Created at: 10/25/2012 3:40:26 AM **/

#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
    int i,c,t,n,d[51];

    while(cin>>n)
    {
        if(n==0)
            break;
        queue<int> q;

        for(i=1;i<=n;i++)
            q.push(i);
        i=0;
        while(i<n)
        {
            d[i]=q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            i++;
        }
        cout<<"Discarded cards:";
        for(i=0;i<n-1;i++)
        {
            cout<<" "<<d[i];
            if(i!=n-2)
                cout<<",";
        }
        cout<<"\nRemaining card: "<<d[n-1]<<endl;
    }
return 0;
}
