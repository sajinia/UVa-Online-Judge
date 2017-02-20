/** Author: Sharmin Akter **/
/** Created at: 2/6/2012 9:31:16 PM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long i,j,k,I,n,r,t,a[11];

	cin>>t;

	for(i=1;i<=t;i++){
		for(j=0;j<=10;j++)
			a[j]=0;
		cin>>n;

		for(I=1;I<=n;I++){
			k=I;
			while(k>0){
			r=k%10;
			k/=10;
			a[r]++;
			}
		}
		for(j=0;j<=9;j++){
			cout<<a[j];
			if(j<9)
				printf(" ");
		}
		cout<<endl;
	}
return 0;
}

