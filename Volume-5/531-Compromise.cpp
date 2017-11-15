/** Author: Sharmin Akter **/
/** Created at: 11/26/2012 9:24:48 PM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<string> v,t;

int maxm(int a,int b)
{
    if(a>b)
        return a;
    else if(b>a)
        return b;
    return 0;
}
void LCS()
{
    int m,n,a,b,c,i,j,x;
    stack<string> k;

    m=v.size();
    n=t.size();

    a=max(m,n)*2;
    b=a+10;
    c=b+10;

    int dir[m+1][n+1],len[m+1][n+1];

    memset(dir,-1,sizeof(dir));
    memset(len,0,sizeof(len));

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i]==t[j])
            {
                len[i+1][j+1]=len[i][j]+1;
                dir[i+1][j+1]=c;
            }
            else
            {
                x=maxm(len[i][j+1],len[i+1][j]);
                if(!x)
                {
                    len[i+1][j+1]=len[i][j+1];
                    dir[i+1][j+1]=a;
                }
                else
                {
                    len[i+1][j+1]=x;
                    if(x==len[i][j+1])
                        dir[i+1][j+1]=a;
                    if(x==len[i+1][j])
                        dir[i+1][j+1]=b;
                }
            }
        }
    }
    i=m;
    j=n;
    while(dir[i][j]!=-1)
    {
        if(dir[i][j]==a)
            i--;
        else if(dir[i][j]==b)
            j--;
        else
        {
            k.push(v[i-1]);
            i--;
            j--;
        }
    }
    cout<<k.top();
    k.pop();

    while(!k.empty())
    {
        cout<<" "<<k.top();
        k.pop();
    }
    cout<<endl;
}
void input()
{
    string s;

    while(cin>>s)
    {
        v.push_back(s);
        while(cin>>s)
        {
            if(s=="#")
                break;
            v.push_back(s);
        }
        while(cin>>s)
        {
            if(s=="#")
                break;
            t.push_back(s);
        }
        LCS();
        v.clear();
        t.clear();
    }
return;
}
int main()
{
    input();

return 0;
}
