/** Author: Sharmin Akter **/
/** Created at: 2/9/2012 3:57:06 AM **/

#include<stdio.h>

int main(){

	char s[1000001];;
	long c=1,i,j,k,l,x,min,max,t;
	
	while(scanf("%s",s)==1){
		scanf("%ld",&t);
		printf("Case %ld:\n",c);
		for(i=1;i<=t;i++){
			j=0;
			scanf("%ld %ld",&max,&min);
			if(min>max){
				x=min;
				min=max;
				max=x;
			}
			k=0;
			for(j=min;j<max;j++){
				if((s[j]^s[j+1])==1){
					k=1;
					break;
				}
			}
			if(k==0)
				printf("Yes\n");
			else 
				printf("No\n");
		}
		getchar();
		c++;
	}
return 0;
}

