/** Author: Sharmin Akter **/
/** Created at: 11/10/2011 1:52:26 AM **/

#include<iostream>
using namespace std;

int main(){

	long a,b,n,i,j,t,r;

	cin>>t;

	for(i=1;i<=t;i++){

		cin>>a;

		j=0;
		b=0;
		n=1;

		while(n!=b){

			b=0;
			n=a;

			while(a!=0){

				r=a%10;
				a/=10;
				b=(b*10)+r;
			}

			if(n==b)
				cout<<j<<" "<<b<<endl;

			else{
				a=n+b;
				j++;
			}
		}
	}

	return 0;
}

