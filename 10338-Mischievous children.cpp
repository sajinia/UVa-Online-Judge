/** Author: Sharmin Akter **/
/** Created at: 10/13/2012 2:13:42 PM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){

	unsigned long int d,fact[25],r,i,j,k,l,t,f=1,a[26],max,min;
	string s;

	cin>>t;

	fact[0]=1;
	fact[1]=1;

	for(j=2;j<=20;j++){
		f*=j;
		fact[j]=f;
	}
	for(i=1;i<=t;i++){
		max=0;
		min=27;
		for(k=1;k<=26;k++)
			a[k]=0;
		cin>>s;
		l=s.size();
		for(j=0;j<l;j++){
			a[s[j]-64]=a[s[j]-64]+1;
			if((s[j]-64)>max)
				max=s[j]-64;
			else if((s[j]-64)<min)
				min=s[j]-64;
		}
		d=1;
		for(k=min;k<=max;k++){
			if(a[k]>1)
				d*=fact[a[k]];
		}
		r=fact[l]/d;
		printf("Data set %lu: %lu\n",i,r);
	}
return 0;
}

