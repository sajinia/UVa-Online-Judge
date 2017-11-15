/** Author: Sharmin Akter **/
/** Created at: 1/23/2012 5:21:20 AM **/

#include<iostream>
using namespace std;

int main(){

	int b,n,t;
	
	while(cin>>n){
		t=n;
		b=0;
		while(n>=3){
			n=(n-3)+1;
			b++;
		}
		if(n==2)
				b++;
		cout<<t+b<<endl;
	}
return 0;
}

