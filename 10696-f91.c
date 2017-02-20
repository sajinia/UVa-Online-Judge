/** Author: Sharmin Akter **/
/** Created at: 1/15/2012 5:43:36 AM **/

#include<stdio.h>

int main(){

	int n,f;
	
	while(scanf("%d",&n)==1){
		if(n==0)
			break;
		if(n>=101)
			f=n-10;
		else 
			f=91;
		printf("f91(%d) = %d\n",n,f);
	}
return 0;
}

