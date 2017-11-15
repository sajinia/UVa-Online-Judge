/** Author: Sharmin Akter **/
/** Created at: 4/20/2012 11:38:22 PM **/

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    long long i,j,k,loc,a[110],b[110],c,n,t,max,fib[50];
    char ct[110],dt[100],ch;

    fib[0]=1;
    fib[1]=2;

    for(i=2;i<=48;i++)
        fib[i]=fib[i-1]+fib[i-2];

    cin>>t;

    for(i=1;i<=t;i++)
    {
        max=0;
        cin>>n;

        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]>max)
                max=a[j];
        }
        getchar();
        j=0;
        while((ch=getchar())!='\n')
        {
            if(ch>=65 && ch<=90)
            {
                ct[j]=ch;
                j++;
            }
        }
        for(j=0;j<=48;j++)
            if(fib[j]==max)
            {
                max=j;
                break;
            }
        for(k=0;k<=max;k++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(fib[k]==a[j])
                {
                    dt[k]=ct[j];
                    break;
                }
                else
                    c++;
            }
            if(c==n)
                dt[k]=' ';
        }
        for(j=0;j<=max;j++)
            cout<<dt[j];
        cout<<endl;
    }
return 0;
}
