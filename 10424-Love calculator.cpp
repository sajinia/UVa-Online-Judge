/** Author: Sharmin Akter **/
/** Created at: 2/6/2012 1:51:08 AM **/

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main(){

	char s1[30],s2[30];
	int i,j,k,l,d,r,g,h,n,m,o,f,t;
	double v,c;
	
	while(gets(s1)){
		if(strlen(s1)==0)
			break;
		gets(s2);
		
		m=0;
		for(i=0;i<strlen(s1);i++){
			t=0;
			if(s1[i]>=65 && s1[i]<=90)
				t=s1[i]-64;
			else if(s1[i]>=97 && s1[i]<=122)
				t=s1[i]-96;
			m+=t;
		}

		f=0;
		for(i=0;i<strlen(s2);i++){
			t=0;
			if(s2[i]>=65 && s2[i]<=90)
				t=s2[i]-64;
			else if(s2[i]>=97 && s2[i]<=122)
				t=s2[i]-96;
			f+=t;
		}
		
		if(m<10)
			n=m;
		else{
			o=m;
			while(o>9){
				n=0;
				while(o!=0){
					r=o%10;
					o/=10;
					n+=r;
				}
				o=n;
			}
		}
		if(f<10)
			g=f;
		else{
			h=f;
			while(h>9){
				g=0;
				while(h!=0){
					r=h%10;
					h/=10;
					g+=r;
				}
				h=g;
			}
		}
		if(n>g){
			d=n;
			n=g;
			g=d;
		}
		c=(double)n/g;	    
		printf("%.2lf %\n",c*100);
	}
return 0;
}

