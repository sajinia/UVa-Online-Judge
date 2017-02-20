/** Author: Sharmin Akter **/
/** Created at: 2/3/2012 3:27:08 AM **/

#include<cstdio>
#include<iostream>
using namespace std;

int main(){

	long c,l,h,v,i,j,f,t;
		
	while(cin>>l>>h){
		j=0;
		v=0;
		if(l==0 && h==0)
			break;
		if(l>h){
			f=l;
			l=h;
			h=f;
		}
		if(l==1 && h==1)
			printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
		else{
			for(i=l;i<=h;i++){
				c=0;
				t=i;
				while(t!=1){
					if(t&1){
						t=(3*t)+1;
						c++;
					}	 	 
					else{
						t/=2;
						c++;
					}
				}
				if(c>j){
					j=c;
					v=i;
				}
				
			}
			printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",l,h,v,j);
		}
	}
return 0;
}

