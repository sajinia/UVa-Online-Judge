/** Author: Sharmin Akter **/
/** Created at: 9/15/2013 9:29:04 PM **/

#include<string>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,l,x,p;
    map<string,string> m;
    map<string,string>::iterator it;
    string s,t;

    cin>>l>>n;
    for(i=0;i<l;i++)
    {
        cin>>s>>t;
        m[s]=t;
    }
    for(i=0;i<n;i++)
    {
        cin>>s;
        p=0;
        x=s.size()-1;
        for(it=m.begin();it!=m.end();it++)
        {
            if(s==(*it).first)
            {
                cout<<(*it).second<<endl;
                p=1;
                break;
            }
        }
        if(!p)
        {
            if(s[x]=='y'&&s[x-1]!='a'&&s[x-1]!='e'&&s[x-1]!='i'&&s[x-1]!='o'&&s[x-1]!='u')
            {
                for(j=0;j<x;j++)
                    cout<<s[j];
                cout<<"ies\n";
            }
            else if((s[x]=='o')||(s[x]=='s')||(s[x]=='x')||(s[x-1]=='c'&&s[x]=='h')||(s[x-1]=='s'&&s[x]=='h'))
                cout<<s<<"es\n";
            else
                cout<<s<<"s\n";
        }
    }
return 0;
}
