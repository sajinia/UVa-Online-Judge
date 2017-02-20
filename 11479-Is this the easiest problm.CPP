/** Author: Sharmin Akter **/
/** Created at: 5/17/2011 5:34:14 PM **/

#include<iostream>
using namespace std;
int main() {
long long t,a,b,c,i;
cin>>t;
for(i=1;i<=t;i++){
    cin>>a>>b>>c;
     if(a+b<=c||b+c<=a||c+a<=b)
        cout<<"Case "<<i<<": Invalid"<<endl;
    else if(a<1||b<1||c<1)
        cout<<"Case "<<i<<": Invalid"<<endl;
    else if(a==b&&b==c)
        cout<<"Case "<<i<<": Equilateral"<<endl;
    else if(a==b||b==c||a==c)
        cout<<"Case "<<i<<": Isosceles"<<endl;
    else if(a!=b&&b!=c)
        cout<<"Case "<<i<<": Scalene"<<endl;
}
return 0;
}
