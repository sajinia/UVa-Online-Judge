/** Author: Sharmin Akter **/
/** Created at: 2/3/2012 6:58:14 PM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	int i,j,n,a[104],age,max;
	
	while(scanf("%d",&n)==1){
	
		if(n==0)
			break;
		for(j=1;j<=104;j++)
			a[j]=0;
			max=0;
		for(i=1;i<=n;i++){
			scanf("%d",&age);
			a[age]=a[age]+1;
			if(age>max)
				max=age;
		}
		for(j=1;j<=max;j++){
			if(a[j]!=0){
				for(i=1;i<=a[j];i++){
					printf("%d",j);
					if(j!=max)
						printf(" ");
					if(j==max)
						if(i!=a[j])
							printf(" ");
				}
			}
		}
		printf("\n");
	}
return 0;
}

