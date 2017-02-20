/** Author: Sharmin Akter **/
/** Created at: 10/25/2012 3:15:04 AM **/

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

