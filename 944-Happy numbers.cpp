/** Author: Sharmin Akter **/
/** Created at: 2/13/2012 4:06:50 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

    long a,b,c=1,i,j,n,r,s,t,x,h[410];

    while(cin>>a>>b){
        if(c!=1)
            cout<<endl;
        for(i=a;i<=b;i++){
            for(j=0;j<410;j++)
                h[j]=0;
            t=i;
            x=0;
            n=1;
            if(t==1)
                x=4;
            else{
                while(t>=1){
                    s=0;
                    while(t>0){
                        r=t%10;
                        t/=10;
                        s+=(r*r);
                    }
                    t=s;
                    n++;
                    h[t]=h[t]+1;
                    if(h[t]>1||t==i)
                        break;
                    else if(t==1){
                        x=4;
                        break;
                    }
                }
            }
            if(x==4)
                printf("%ld %ld\n",i,n);
        }
        c++;
    }
return 0;
}
