/** Author: Sharmin Akter **/
/** Created at: 2/3/2012 4:13:24 AM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){
	
	int i,o,e;
	string s;
	
	while(cin>>s){
		if(s=="0")
			break;
		o=0;
		e=0;
		for(i=0;i<s.size();i++){
			if(i&1)
				o+=(s[i]-48);
			else 
				e+=(s[i]-48);
		}
		if((o-e)%11==0)
			cout<<s<<" is a multiple of 11.\n";
		else 
			cout<<s<<" is not a multiple of 11.\n";
	}
return 0;
}

