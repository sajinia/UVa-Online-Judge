/** Author: Sharmin Akter **/
/** Created at: 1/25/2012 4:44:14 AM **/

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

	double a,b,c,d,area,r,res;
	
	while(cin>>a>>b>>c){
		
		r=0.5*(a+b+c);
		area=r*(r-a)*(r-b)*(r-c);
		
		if(area>0){
			d=4.0/3.0;
			res=(d*sqrt(area));
			printf("%.3lf\n",res);
		}
		else 
			cout<<"-1.000\n";
	}
return 0;
}

