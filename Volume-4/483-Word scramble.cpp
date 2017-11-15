/** Author: Sharmin Akter **/
/** Created at: 1/25/2012 12:56:08 AM **/

#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	
	int i,j,k,l,t;
	char str[4000];
	
	while(gets(str)){
		l=strlen(str);
		k=0;
		for(i=0;i<=l;i++){
			if(str[i]==' '||str[i]=='\0'){
				t=i;
						
				for(j=t-1;j>=k;j--){
					cout<<str[j];
				}
				k=t+1;
				if(str[i]==' ')
					cout<<str[i];
				else 
					cout<<endl;
				
			}	 	 
		}
	}
return 0;
}

