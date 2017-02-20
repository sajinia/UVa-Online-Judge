/** Author: Sharmin Akter **/
/** Created at: 1/15/2012 5:18:34 AM **/

#include<iostream>
using namespace std;

int main(){

	int a[100],i,j,k,l,m,n,t;
	
	cin>>t;
	
	for(l=1;l<=t;l++){
		cin>>n;
		
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
    	cout<<"Optimal train swapping takes "<<m<<" swaps."<<endl;
	}
return 0;
}

