/** Author: Sharmin Akter **/
/** Created at: 11/26/2012 11:52:24 PM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    string s;
    char ch[400];
    int i,t;
    map<string,int> m;
    map<string,int> ::iterator it;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        cin>>s;
        m[s]++;
        gets(ch);
    }
    for(it=m.begin(); it!=m.end(); it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
return 0;
}
