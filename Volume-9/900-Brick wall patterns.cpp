/** Author: Sharmin Akter **/
/** Created at: 10/24/2012 1:08:20 PM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long i,l,f[54];

	while(cin>>l){
		if(l==0)
			break;
		f[0]=1;
		f[1]=1;

		for(i=2;i<=50;i++)
			f[i]=f[i-1]+f[i-2];
		cout<<f[l]<<endl;
	}
return 0;
}

