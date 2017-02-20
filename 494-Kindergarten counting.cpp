/** Author: Sharmin Akter **/
/** Created at: 2/1/2012 9:00:44 PM **/

#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	
	int i,l,w;
	char str[4000];
	
	while(gets(str)){
		l=strlen(str);
		w=0;
		for(i=0;i<=l;i++){
			if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
				if(str[i+1]<'A'||(str[i+1]>'Z'&& str[i+1]<'a')|| str[i+1]>'z')
				w++;
			}
		}
		cout<<w<<endl;
	}
return 0;
}

