/** Author: Sharmin Akter **/
/** Created at: 1/25/2012 2:06:48 AM **/

#include<iostream>
using namespace std;

int main(){

	unsigned long long n,m,s;
	
	while(cin>>s){
		
		if(s==0)
			break;
		n=(10*s)/9;
		m=(n-1)/10;
		
		if((n-1)-m==s)
			cout<<n-1<<" "<<n<<endl;
		else 
			cout<<n<<endl;
	}
return 0;
}

