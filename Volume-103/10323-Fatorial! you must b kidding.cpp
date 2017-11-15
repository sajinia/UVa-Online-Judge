/** Author: Sharmin Akter **/
/** Created at: 1/25/2012 4:03:16 AM **/

#include<iostream>
using namespace std;

int main(){

	long f,i,n,t;
	
	while(cin>>n){
		if(n<0){
			t=n*-1;
			if(t&1)
				cout<<"Overflow!\n";
			else 
				cout<<"Underflow!\n";
		}
		else if(n<8)
			cout<<"Underflow!\n";
		else if(n>13)
			cout<<"Overflow!\n";
		else{
			f=1;
			for(i=n;i>=2;i--)
				f*=i;
			cout<<f<<endl;
		}
	}
return 0;
}

