/** Author: Sharmin Akter **/
/** Created at: 6/17/2012 8:59:22 PM **/

#include<stdio.h>
#include<string>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n,t;
    char ch,c[10];
    string s;
    map<string,int> m;
    map<string,int>::iterator it;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        getchar();
        for(j=1;j<=n;j++)
        {
            k=0;
            while((ch=getchar())!='\n')
            {
                if(ch>='A'&&ch<='C')
                {
                    c[k]='2';
                    k++;
                }
                else if(ch>='D'&&ch<='F')
                {
                    c[k]='3';
                    k++;
                }
                else if(ch>='G'&&ch<='I')
                {
                    c[k]='4';
                    k++;
                }
                else if(ch>='J'&&ch<='L')
                {
                    c[k]='5';
                    k++;
                }
                else if(ch>='M'&&ch<='O')
                {
                    c[k]='6';
                    k++;
                }
                else if(ch=='P'||ch=='R'||ch=='S')
                {
                    c[k]='7';
                    k++;
                }
                else if(ch>='T'&&ch<='V')
                {
                    c[k]='8';
                    k++;
                }
                else if(ch>='W'&&ch<='Y')
                {
                    c[k]='9';
                    k++;
                }
                else if(ch>='0'&&ch<='9')
                {
                    c[k]=ch;
                    k++;
                }
                if(k==3)
                {
                    c[k]='-';
                    k++;
                }
            }
            c[k]='\0';
            s=c;
            m[s]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if((*it).second>1)
            {
                k=0;
                cout<<(*it).first<<" "<<(*it).second<<endl;
            }
        }
        if(k!=0)
            printf("No duplicates.\n");
        if(i!=t)
            cout<<endl;
        m.clear();
    }
return 0;
}
