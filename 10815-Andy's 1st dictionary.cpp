/** Author: Sharmin Akter **/
/** Created at: 10/25/2012 3:33:10 AM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char ch,w[100];
    string s;
    map<string,int> m;
    map<string,int>::iterator it;
    int i=0;

    while((ch=getchar())!=EOF)
    {
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        {
            ch=tolower(ch);
            w[i]=ch;
            i++;
        }
        else
        {
            w[i]='\0';
            s=w;
            if(s[0]>=97&&s[0]<=122)
                m[s]++;
            i=0;
        }
    }
    for(it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<endl;
return 0;
}
