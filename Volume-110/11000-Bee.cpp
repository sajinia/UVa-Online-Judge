/** Author: Sharmin Akter **/
/** Created at: 2/4/2012 1:04:50 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	
	long i,b,f[50],m,t;
	
	while(cin>>b){
		if(b==-1)
			break;
		f[0]=0;
		f[1]=1;
		
		for(i=2;i<=49;i++)
			f[i]=f[i-1]+f[i-2];
		m=f[b+2]-1;
		t=f[b+3]-1;
		printf("%ld %ld\n",m,t);
	}
return 0;
}

