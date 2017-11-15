/** Author: Sharmin Akter **/
/** Created at: 2/10/2012 12:26:22 AM **/

#include<stdio.h>

int main(){

	int i,e,f,c,n,s,test;
	
	scanf("%d",&test);
	
	for(i=1;i<=test;i++){
		scanf("%d %d %d",&e,&f,&c);
		n=e+f;
		s=0;
		while(n>=c){
			n=(n-c)+1;
			s++;
		}
		printf("%d\n",s);
	}
return 0;
}

