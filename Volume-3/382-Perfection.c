/** Author: Sharmin Akter **/
/** Created at: 2/9/2012 3:00:00 AM **/

#include<stdio.h>

int main(){

	long d,i,j,a[110],s;
	
	for(j=0;j<=100;j++){
		scanf("%ld",&a[j]);
		if(a[j]==0){
			s=j;
			break;
		}
	}
	printf("PERFECTION OUTPUT\n");
	for(j=0;j<=s;j++){
		if(a[j]==0)
			printf("END OF OUTPUT\n");
		else{
		d=0;
		for(i=1;i<=a[j]/2;i++){
			if(a[j]%i==0)
				d+=i;
		}
		if(d==a[j])
			printf("%5ld  PERFECT\n",a[j]);
		else if(d>a[j])
			printf("%5ld  ABUNDANT\n",a[j]);
		else 
			printf("%5ld  DEFICIENT\n",a[j]);
		}
	}
return 0;
}

