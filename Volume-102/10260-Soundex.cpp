/** Author: Sharmin Akter **/
/** Created at: 2/8/2012 1:31:46 AM **/

#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;

int main(){

	int i,j,n,a[50];
	char str[50];
	
	while(gets(str)){
		j=0;
		for(i=0;i<strlen(str);i++){
			if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V'){
				if(str[i+1]!='B'&& str[i+1]!='F'&& str[i+1]!='P'&& str[i+1]!='V'){
					a[j]=1;
					j++;
				}
			}
			else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z'){
				if(str[i+1]!='C'&& str[i+1]!='G'&& str[i+1]!='J'&& str[i+1]!='K'&& str[i+1]!='Q'&& str[i+1]!='S'&& str[i+1]!='X'&& str[i+1]!='Z'){
					a[j]=2;
					j++;
				}
			}	   	   	   	   	   	   	   	   	   	   	   	 
      		else if(str[i]=='D'||str[i]=='T'){
				if(str[i+1]!='D'&& str[i+1]!='T'){
					a[j]=3;
					j++;
				}
			}	   	   	   	   	   	   	
      		else if(str[i]=='L'){
				if(str[i+1]!='L'){
					a[j]=4;
					j++;
				}
			}
     		else if(str[i]=='M'||str[i]=='N'){
				if(str[i+1]!='M'&& str[i+1]!='N'){
					a[j]=5;
					j++;
				}
			}
     		else if(str[i]=='R'){
				if(str[i+1]!='R'){
					a[j]=6;
					j++;
				}
			}
 			else 
				continue;
		}
		n=j;
		for(j=0;j<n;j++)
			cout<<a[j];
		cout<<endl;
	}
return 0;
}

