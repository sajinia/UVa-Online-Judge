/** Author: Sharmin Akter **/
/** Created at: 2/9/2012 1:47:10 AM **/

#include<stdio.h>

int main(){

	long a,b,g,i,j,n,r,t;
	
	while(scanf("%ld",&n)==1){
		if(n==0)
			break;
		r=0;
		for(i=1;i<n;i++){
			for(j=i+1;j<=n;j++){
				a=j;
				b=i;
				while(b>0){
					g=a%b;
					if(g==0)
						break;
					a=b;
					b=g;
				}
				r+=b;
			}
		}
		printf("%ld\n",r);
	}
return 0;
}

