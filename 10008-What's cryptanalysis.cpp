/** Author: Sharmin Akter **/
/** Created at: 4/23/2012 11:24:52 PM **/

#include<cstdio>
#include<cstring>
#include<map>
#include<set>
#include<iostream>
using namespace std;

int main()
{
    int i,j,t;
    char s[1000];
    map<char,int> m;
    map<char,int>::iterator it;
    set<int> a;
    set<int>::reverse_iterator rit;

    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(s);
        for(j=0;j<strlen(s);j++)
        {
            if((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122))
            {
                if((s[j]>=97&&s[j]<=122))
                    s[j]-=32;
                m[s[j]]++;
            }
        }
    }
    for(it=m.begin();it!=m.end();it++)
        a.insert((*it).second);

    for(rit=a.rbegin();rit!=a.rend();rit++)
    {
        for(it=m.begin();it!=m.end();it++)

            if(*rit==(*it).second)
                cout<<(*it).first<<" "<<(*it).second<<endl;
    }
return 0;
}
