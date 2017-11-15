/** Author: Sharmin Akter **/
/** Created at: 2/8/2012 2:46:42 AM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){

	string s;
	int i,j,l,p,t,w;
	
	while(cin>>s){
		l=s.size();
		w=0;
		for(i=0;i<l;i++){
			t=0;
			if(s[i]>=65 && s[i]<=90)
				t=s[i]-38;
			else if(s[i]>=97 && s[i]<=122)
				t=s[i]-96;
			w+=t;
		}
		if(w==1||w==2||w==3)
			printf("It is a prime word.\n");
		else if(w%2==0)
			printf("It is not a prime word.\n");
		else{
			p=0;
			for(j=3;j*j<=w;j+=2){
				if(w%j==0){
					p=4;
					break;
				}
			}
			if(p==4)
				printf("It is not a prime word.\n");
			else 
				printf("It is a prime word.\n");
		}
	}
return 0;
}


