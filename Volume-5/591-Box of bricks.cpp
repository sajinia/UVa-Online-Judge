/** Author: Sharmin Akter **/
/** Created at: 2/1/2012 7:39:52 PM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long i,n,a[57],s,m,x,t=1;
	
	while(cin>>n){
	
		if(n==0)
			break;
		for(i=1;i<=n;i++)
			cin>>a[i];
		s=0;
		for(i=1;i<=n;i++)
			s+=a[i];
		x=s/n;
		m=0;
		for(i=1;i<=n;i++){
			if(a[i]>x)
				m+=a[i]-x;
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,m);
		t++;
	}
return 0;
}

