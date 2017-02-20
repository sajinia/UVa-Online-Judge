/** Author: Sharmin Akter **/
/** Created at: 1/19/2012 2:33:42 AM **/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int i,j,k,d,r,s[600],n[600],t,v;
	
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>r;
		for(j=0;j<r;j++)
			cin>>s[j];
		sort(s,s+(r-1));
		for(j=0;j<r;j++){
			d=0;
			for(k=r-1;k>=0;k--){
				v=(s[k]-s[j]);
				if(v<0)
					v*=-1;
				d+=v;
			}
			n[j]=d;
			
		}
		sort(n,n+r);
		cout<<n[0]<<endl;
	}
return 0;
}

