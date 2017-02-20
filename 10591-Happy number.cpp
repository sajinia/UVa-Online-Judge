/** Author: Sharmin Akter **/
/** Created at: 10/25/2012 3:25:06 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

    long i,j,h,n,r,s,t,x,a[730];

    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<=730;j++)     /** j<730 nileo hobe **/
            a[j]=0;
        cin>>n;
        h=n;
        x=0;
        if(n==1)
            x=4;
        else{
            while(n>=1){        /** n>=0 nileo hobe **/
                s=0;
                while(n>0){
                    r=n%10;
                    n/=10;
                    s+=(r*r);
                }
                n=s;
                a[n]=a[n]+1;
                if(a[n]>1||n==h){
                    x=1;
                    break;
                }
                else if(n==1){
                    x=4;
                    break;
                }
            }
        }
        if(x==4)
            printf("Case #%ld: %ld is a Happy number.\n",i,h);
        else
            printf("Case #%ld: %ld is an Unhappy number.\n",i,h);
    }
return 0;
}
