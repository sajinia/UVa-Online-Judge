/** Author: Sharmin Akter **/
/** Created at: 2/1/2012 3:53:48 AM **/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

	long double c,d,i,j,n,m,N,M;

	while(cin>>n>>m){
		if(n==0 && m==0)
			break;
		d=n-m;
		N=1;
		M=1;
	
		if(d>m){
			for(i=n;i>d;i--)
				N*=i;
			for(j=2;j<=m;j++)
				M*=j;
			c=N/M;
		}
		
		else{
			for(i=n;i>m;i--)
				N*=i;
			for(j=2;j<=d;j++)
				M*=j;
			c=N/M;
		}	
		printf("%.Lf\n",c);
	}
return 0;
}

