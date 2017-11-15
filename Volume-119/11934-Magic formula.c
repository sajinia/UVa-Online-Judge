/** Author: Sharmin Akter **/
/** Created at: 2/10/2012 3:48:12 AM **/

#include<stdio.h>

int main(){

	long a,b,c,d,f,l,i,n;
	
	while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)==5){
		
		if(a==0 && b==0 && c==0 && d==0 && l==0)
			break;
		n=0;
		for(i=0;i<=l;i++){
		
			f=(a*i*i)+(b*i)+c;
			if(f%d==0)
				n++;
		}
		printf("%ld\n",n);
	}
return 0;
}

