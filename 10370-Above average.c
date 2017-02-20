/** Author: Sharmin Akter **/
/** Created at: 11/11/2011 7:22:26 PM **/

#include<stdio.h>

int main(){

	int t,i,j,n[1000],a,m;
	float p,c,s;

	scanf("%d",&t);

	for(i=1;i<=t;i++){

		scanf("%f",&s);

		m=0;
		c=0;

		for(j=1;j<=s;j++){

			scanf("%d",&n[j]);

			m=m+n[j];
		}

		a=m/s;

		for(j=1;j<=s;j++){

			if(n[j]>a)

				c++;
		}

		p=(c*100)/s;

		printf("%.3f%\n",p);
	}

	return 0;
}

