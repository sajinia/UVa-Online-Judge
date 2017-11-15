/** Author: Sharmin Akter **/
/** Created at: 4/30/2012 2:55:08 AM **/

#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector< pair< pair<string,int>,int> > v;
    string s;
    int x,i,j,k,t,l,h,p,q,n;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        if(i!=1)
            cout<<endl;
        cin>>x;
        for(j=1;j<=x;j++)
        {
            cin>>s>>l>>h;
            v.push_back(make_pair(make_pair(s,l),h));
        }
        cin>>q;
        {
            for(j=1;j<=q;j++)
            {
                n=0;
                cin>>p;
                for(k=0;k<v.size();k++)
                {
                    if(p>=v[k].first.second && p<=v[k].second)
                    {
                        s=v[k].first.first;
                        n++;
                    }
                }
                if(n==1)
                    cout<<s<<endl;
                else
                    cout<<"UNDETERMINED\n";
            }
        }
        v.clear();
    }
return 0;
}
