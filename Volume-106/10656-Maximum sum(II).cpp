/** Author: Sharmin Akter **/
/** Created at: 2/6/2012 12:22:32 AM **/

#include<iostream>
using namespace std;

int main(){

	int i,j,a[1001],b[1001],n,t,z;
	
	while(cin>>t){
		if(t==0)
			break;
		z=0;
		for(i=1;i<=t;i++)
			cin>>a[i];
		for(i=1;i<=t;i++){
			if(a[i]==0)
				z++;
		}
		if(z==t)
			cout<<"0\n";
		else{
			j=0;
			for(i=1;i<=t;i++){
				if(a[i]!=0){
					b[j]=a[i];
					j++;
				}
			}
			n=j;
			for(j=0;j<n;j++){
				cout<<b[j];
				if(j!=n-1)
					cout<<" ";
				else 
					cout<<endl;
			}
		}
	}
return 0;
}

