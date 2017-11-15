/** Author: Sharmin Akter **/
/** Created at: 1/23/2012 5:46:38 AM **/

#include<iostream>
using namespace std;

int main(){

	long n,d,r;
	
	while(cin>>n){
		if(n<0)
			break;
		if(n&1){
			d=(n/2)+1;
			n*=d;
			cout<<n+1<<endl;
		}
		else{
			d=n/2;
			n*=d;
			cout<<(n+d+1)<<endl;
		}
	}
return 0;
}

