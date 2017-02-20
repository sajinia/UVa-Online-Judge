/** Author: Sharmin Akter **/
/** Created at: 2/6/2012 10:25:08 PM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){

	string s;
	int i,j,l,n;
	
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		cin>>s;
		l=s.size();

		if(s=="1"||s=="4"||s=="78")
			cout<<"+\n";
		else if(s[l-2]=='3' && s[l-1]=='5')
			cout<<"-\n";
		else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
			cout<<"?\n";
		else 
			cout<<"*\n";
	}
return 0;
}

