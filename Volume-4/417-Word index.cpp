/** Author: Sharmin Akter **/
/** Created at: 6/22/2012 9:54:10 PM **/

#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    char c,ch,j,l,f,w[10];
    map<string,int> m;

    for(ch='a';ch<='z';ch++)
    {
        w[0]=ch;
        w[1]='\0';
        s=w;
        m[s]=ch-96;
    }
    n=27;
    for(ch='a';ch<='z';ch++)
    {
        for(c=ch+1;c<='z';c++)
        {
            w[0]=ch;
            w[1]=c;
            w[2]='\0';
            s=w;
            m[s]=n;
            n++;
        }
    }
    for(ch='a';ch<='z';ch++)
    {
        for(c=ch+1;c<='z';c++)
        {
            for(j=c+1;j<='z';j++)
            {
                w[0]=ch;
                w[1]=c;
                w[2]=j;
                w[3]='\0';
                s=w;
                m[s]=n;
                n++;
            }
        }
    }
    for(ch='a';ch<='z';ch++)
    {
        for(c=ch+1;c<='z';c++)
        {
            for(j=c+1;j<='z';j++)
            {
                for(f=j+1;f<='z';f++)
                {
                    w[0]=ch;
                    w[1]=c;
                    w[2]=j;
                    w[3]=f;
                    w[4]='\0';
                    s=w;
                    m[s]=n;
                    n++;
                }
            }
        }
    }
    for(ch='a';ch<='z';ch++)
    {
        for(c=ch+1;c<='z';c++)
        {
            for(j=c+1;j<='z';j++)
            {
                for(f=j+1;f<='z';f++)
                {
                    for(l=f+1;l<='z';l++)
                    {
                        w[0]=ch;
                        w[1]=c;
                        w[2]=j;
                        w[3]=f;
                        w[4]=l;
                        w[5]='\0';
                        s=w;
                        m[s]=n;
                        n++;
                    }
                }
            }
        }
    }
    while(cin>>s)
    {
        if(m[s])
            cout<<m.find(s)->second<<endl;
        else
            cout<<"0\n";
    }
return 0;
}
