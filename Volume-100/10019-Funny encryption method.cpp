/** Author: Sharmin Akter **/
/** Created at: 1/15/2012 1:38:50 AM **/

#include<iostream>
using namespace std;

int main(){

	int i,n,m,h,r,b1,b2;
	
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		cin>>m;
		
		b1=0;
		b2=0;
		h=m;
		
		while(m!=0){
			if(m%2==1){
				m/=2;
				b1++;
			}
			else 
				m/=2;
		}
		while(h!=0){
			r=h%10;
			h/=10;
		
			while(r!=0){
				if(r%2==1){
					r/=2;
					b2++;
				}
				else 
					r/=2;
			}
		}
		cout<<b1<<" "<<b2<<endl;
	}
return 0;
}

