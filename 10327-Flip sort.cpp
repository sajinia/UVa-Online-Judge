/** Author: Sharmin Akter **/
/** Created at: 1/17/2012 7:34:04 PM **/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int a[1004],i,j,k,m,n;
	
	while(scanf("%d",&n)!=EOF){
		
		for(i=0;i<n;i++)
		    cin>>a[i];
    	m=0;
		for(i=1;i<n;i++){
        	k=a[i];
        	j=i-1;
        	
			while(j>=0&&a[j]>k){
        		a[j+1]=a[j];
        		j--;
				m++;
				}
        	a[j+1]=k;
		}
    	cout<<"Minimum exchange operations : "<<m<<endl;
	}
return 0;
}

