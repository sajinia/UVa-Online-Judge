/** Author: Sharmin Akter **/
/** Created at: 11/11/2011 4:35:18 AM **/

#include<iostream>
using namespace std;

int main(){

    long i,j,n,t,r[1000];
 
    while(1){
      
	    cin>>n;
       
	    if(n<0)
            break;
	
		else if(n==0)
			cout<<"0"<<endl;
	
		else{
       		i=1;
	    	
			while(n!=0){
            	r[i]=n%3;
            	n/=3;
            	i++;
        	}
	    
			for(j=i-1;j>=1;j--)
            	cout<<r[j];
	    	cout<<endl;
		}
    }
    return 0;
}

