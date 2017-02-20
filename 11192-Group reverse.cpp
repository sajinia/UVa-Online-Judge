/** Author: Sharmin Akter **/
/** Created at: 1/24/2012 3:40:02 AM **/

#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	int i,j,k,l,d,n,t;
	char str[120];
	
	while(cin>>n){
		getchar();
		if(n==0)
			break;
		gets(str);
	
		l=strlen(str)/n;
		d=l;
		t=d;
		k=0;
		for(i=1;i<=n;i++){
			for(j=d-1;j>=k;j--)
				cout<<str[j];
			d+=t;
			k+=t;
		}
		cout<<endl;
	}
return 0;
}	 	 

