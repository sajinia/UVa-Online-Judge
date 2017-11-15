/** Author: Sharmin Akter **/
/** Created at: 2/10/2012 12:46:24 AM **/

#include<stdio.h>

int main(){

	int i,st,gt,n,a[1009],t=1;
	
	while(scanf("%d",&n)==1){
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		st=0;
		gt=0;
		for(i=0;i<n;i++){
			if(a[i]==0)
				gt++;
			else 
				st++;
		}
		printf("Case %d: %d\n",t,(st-gt));
		t++;
	}
return 0;
}

