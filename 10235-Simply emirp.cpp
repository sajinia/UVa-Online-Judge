/** Author: Sharmin Akter **/
/** Created at: 2/10/2012 6:42:38 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long j,s,t,p,r,i,m,e;
	
	while(cin>>m){
		p=0;
		if(m==1)
			p=4;
		else if(m==2||m==3)
			p=0;
		else if(m%2==0)
			p=4;
		else{
			for(i=3;i*i<=m;i+=2){
				if(m%i==0){
					p=4;
					break;
				}
			}
		}
		if(p==4)
			printf("%ld is not prime.\n",m);
		else{
			e=0;
			t=m;
			s=0;
			while(m>0){
				r=m%10;
				m/=10;
				s=(s*10)+r;
			}
			if(s==2||s==3)
				e=0;
			else if(s%2==0)
				e=4;
			else{
				for(j=3;j*j<=s;j+=2){
					if(s%j==0){
						e=4;
						break;
					}
				}
			}
			if(e==0 && s!=t)
				printf("%ld is emirp.\n",t);
			else 
				printf("%ld is prime.\n",t);
		}
	}
return 0;
}

