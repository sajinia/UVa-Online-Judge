/** Author: Sharmin Akter **/
/** Created at: 1/17/2012 11:37:08 PM **/

#include<iostream>
using namespace std;

int main(){
	
	int s,d,m,n,i,t;
	
	cin>>t;
	
	for(i=1;i<=t;i++){
		cin>>s>>d;
		if(s<d||(s-d)&1)
			cout<<"impossible\n";
		else{
			n=(s-d)/2;
			m=n+d;
			cout<<m<<" "<<n<<endl;
			}
	}
return 0;
}

