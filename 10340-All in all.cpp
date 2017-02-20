/** Author: Sharmin Akter **/
/** Created at: 2/22/2012 3:23:04 AM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){

	string s,t;
	int i,j,b,q;

	while(cin>>s>>t){

		q=-1;
		b=0;
		for(i=0;i<s.size();i++){
			for(j=q+1;j<t.size();j++){
				if(s[i]==t[j]){
					q=j;
					b++;
					break;
				}
			}
		}
		if(b==s.size())
			printf("Yes\n");
		else
			printf("No\n");
	}
return 0;
}

