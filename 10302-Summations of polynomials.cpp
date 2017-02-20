/** Author: Sharmin Akter **/
/** Created at: 7/27/2012 3:14:40 PM **/

#include<iostream>
using namespace std;
int main() {
long long i,n,c,s;
while(1) {
    cin>>n;
    if(cin.eof())
        break;
    s=0;
    for(i=1;i<=n;i++) {
        c=i*i*i;
        s=s+c;
        }
     cout<<s<<endl;
    }
return 0;
}
