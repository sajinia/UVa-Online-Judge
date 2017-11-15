/** Author: Sharmin Akter **/
/** Created at: 2/3/2012 9:55:06 PM **/

#include<stdio.h>

int main(){

	long long n;
	
	while(scanf("%lld",&n)==1){
	
		if(n<0)
			break;
		if(n==1)
			printf("0%\n");
		else 
			printf("%lld%\n",(n*25));
	}
return 0;
}

