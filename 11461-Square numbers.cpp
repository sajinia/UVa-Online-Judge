/** Author: Sharmin Akter **/
/** Created at: 11/30/2011 1:44:56 AM **/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int a,b;
	
	while(1){
	
		cin>>a>>b;
	
		if(a==0 && b==0)
		
			break;	  
		
		cout<<(long int)sqrt(b)-(long int)sqrt(a-1)<<endl;
	}
	return 0;
}

