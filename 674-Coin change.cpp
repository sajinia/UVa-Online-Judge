/** Author: Sharmin Akter **/
/** Created at: 3/12/2012 11:43:06 PM **/

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int i,j,m,n,a[]={1,5,10,25,50},c[10000];

    memset(c,0,sizeof(c));
    c[0]=1;
    for(i=0;i<5;i++)
    {
        n=a[i];
        for(j=n;j<=7489;j++)
            c[j]+=c[j-n];
    }
    while(cin>>m)
        cout<<c[m]<<endl;
return 0;
}
