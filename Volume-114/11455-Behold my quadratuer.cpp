/** Author: Sharmin Akter **/
/** Created at: 4/26/2012 10:45:12 PM **/

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long i,j,n,a[4],t;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        for(j=0;j<=3;j++)
            cin>>a[j];

        sort(a,a+4);

        if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[0]==a[3])
            cout<<"square\n";
        else if(a[0]==a[1]&&a[2]==a[3]&&a[1]!=a[2])
            cout<<"rectangle\n";
        else if((a[0]+a[1]+a[2])>a[3])
            cout<<"quadrangle\n";
        else
            cout<<"banana\n";
    }
return 0;
}
