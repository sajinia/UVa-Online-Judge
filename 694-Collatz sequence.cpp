/** Author: Sharmin Akter **/
/** Created at: 2/3/2012 12:48:38 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long a,l,i,j,t=1,A;
		
	while(cin>>a>>l){	 	 
		int c=1;
		A=a;
		if(a<0 && l<0)
			break;
			while(a!=1){
				if(a&1){
					if(a<=l){
						a=(3*a)+1;
						if(a<=l)
							c++;
						else 
							a=1;
					}
				}	 	 
				else{
					if(a<=l){
						a/=2;
						if(a<=l)
							c++;
						else 
							a=1;
					}
				}
			}
		if(a==1)
			printf("Case %ld: A = %ld, limit = %ld, number of terms = %d\n",t,A,l,c);
		t++;
	}
return 0;
}

