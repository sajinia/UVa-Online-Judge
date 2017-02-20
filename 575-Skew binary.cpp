/** Author: Sharmin Akter **/
/** Created at: 1/25/2012 3:24:10 AM **/

#include<iostream>
#include<math.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main(){
	
	int d,r,i,l,n,t;
	char s[4000];
	
	while(cin>>s){
		if(s[0]=='0')
			break;
		d=0;
		l=strlen(s);
		n=l;

		for(i=0;i<l;i++){
			t=s[i]-48;
			r=t*((int)pow((double)2,(double)n)-1);
			d+=r;
			n--;
		}
		cout<<d<<endl;
	}
return 0;
}

