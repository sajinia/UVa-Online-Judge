/** Author: Sharmin Akter **/
/** Created at: 5/6/2012 11:51:08 PM **/

#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n,t,c;
    char ch;
    double d;
    map<char,int> m;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        d=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>ch>>c;
            m[ch]=c;
        }
        cin>>k;
        getchar();
        for(j=1;j<=k;j++)
        {
            while((ch=getchar())!='\n')
            {
                if(m[ch])
                    d+=m.find(ch)->second;
            }
        }
        printf("%.2lf$\n",d/100);
        m.clear();
    }
return 0;
}
