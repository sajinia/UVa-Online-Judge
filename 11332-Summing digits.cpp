/** Author: Sharmin Akter **/
/** Created at: 1/23/2012 6:47:26 AM **/

#include<iostream>
using namespace std;

int main(){

	long n,g,f,t;
	
	while(cin>>n){
		if(n==0)
			break;
		if(n<10)
			g=n;
		else{
			t=n;
			while(t>9){
				g=0;
				while(t!=0){
					f=t%10;
					t/=10;
					g+=f;
				}
				t=g;
			}
		}
		cout<<g<<endl;
	}
return 0;
}

