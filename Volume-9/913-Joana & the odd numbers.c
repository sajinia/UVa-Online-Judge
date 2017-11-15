/** Author: Sharmin Akter **/
/** Created at: 2/8/2012 1:47:02 AM **/

#include<stdio.h>

int main(){

	long i,n,o,p,s;
	
	while(scanf("%ld",&n)==1){
		
		p=((n+1)/2)*((n+1)/2);
		
		o=(p*2)-1;
		s=0;
		for(i=o;i>=(o-4);i-=2)
			s+=i;
		printf("%ld\n",s);
	}
return 0;
}

