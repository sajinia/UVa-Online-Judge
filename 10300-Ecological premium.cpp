/** Author: Sharmin Akter **/
/** Created at: 2/1/2012 12:04:52 AM **/

#include<iostream>
using namespace std;

int main(){
	
	long i,j,a,f,s,r,n,t;
	
	cin>>t;
	
	for(i=1;i<=t;i++){
		
		cin>>n;
		r=0;
		for(j=1;j<=n;j++){
			
			cin>>s>>a>>f;
			r+=(s*f);
		}
		cout<<r<<endl;
	}
return 0;
}

