/** Author: Sharmin Akter **/
/** Created at: 10/28/2012 8:29:32 PM **/

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int pre(char ch)
{
    if(ch=='/'||ch=='*')
        return(4);
    else
        return(1);
}
int main()
{
    char ch[4];
    int i,j,k,m,n,h,l,s,z,t;
    vector<char> stk,p,q;

    cin>>s;
    getchar();
    getchar();

    for(z=0;z<s;z++)
    {
        while(gets(ch) && strlen(ch))
            q.push_back(ch[0]);

        k=1;

        stk.push_back('(');
        q.push_back(')');

        for(i=0;i<q.size();i++)
        {
            if(q[i]>=48 && q[i]<=57)
                p.push_back(q[i]);

            else if(q[i]=='(')
            {
                stk.push_back(q[i]);
                k++;
            }
            else if(q[i]=='+'||q[i]=='-'||q[i]=='*'||q[i]=='/')
            {
                stk.push_back(q[i]);

                if(stk[k-1]!=40)
                {
                    m=k;

                    while(stk[m-1]!=40)
                    {
                        l=pre(stk[k]);
                        h=pre(stk[k-1]);

                        if(h>=l)
                        {
                            p.push_back(stk[k-1]);
                            stk[k-1]=stk[k];
                            stk.pop_back();
                            k--;
                            m--;
                        }
                        else
                            break;
                    }
                    k++;
                }
                else
                    k++;
            }
            else
            {
                m=k;

                while(stk[m-1]!=40)
                {
                    k--;
                    stk.pop_back();
                    p.push_back(stk[k]);
                    m--;
                }
                k--;
                stk.pop_back();
            }
        }
        if(z!=0)
            cout<<endl;

        for(t=0;t<p.size();t++)
            printf("%c",p[t]);

        printf("\n");

        stk.clear();
        p.clear();
        q.clear();
    }
return 0;
}
