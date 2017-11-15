/** Author: Sharmin Akter **/
/** Created at: 1/17/2012 5:35:10 PM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long n,k,c;
	
	while(scanf("%ld %ld",&n,&k)==2){
		c=0;
		while(n>=k){
			n=(n-k)+1;
			c+=k;
			}
			c+=n;
		cout<<c<<endl;
	}
return 0;
}
			

