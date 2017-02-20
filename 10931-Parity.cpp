/** Author: Sharmin Akter **/
/** Created at: 1/31/2012 12:47:30 AM **/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	long i,j,k,b[40],r,p;
	
	while(cin>>i){
		if(i==0)
			break;
		p=0;
		j=0;
		while(i!=0){
			b[j]=i%2;
			i/=2;
			if(b[j]==1)
				p++;
			j++;
		}
		printf("The parity of ");
		for(k=j-1;k>=0;k--)
			cout<<b[k];
		printf(" is %ld (mod 2).\n",p);
	}
return 0;
}

