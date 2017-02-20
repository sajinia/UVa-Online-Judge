/** Author: Sharmin Akter **/
/** Created at: 2/7/2012 1:33:42 AM **/

#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	string s;
	long i,t,tree;
	double p;
	map<string,int> M;
	map<string,int>::iterator it;
	
	cin>>t;
	getchar();
	getchar();
	
	for(i=1;i<=t;i++){
	
		tree=0;
		while(getline(cin,s)){
			if(s.empty())
				break;
			M[s]++;
			tree++;
		}
		for(it=M.begin();it!=M.end();it++){
    		
			cout<<(*it).first<<" ";
			p=(double)(((double)(*it).second/(double)tree)*100);
			printf("%.4lf\n",p);
		}
		if(i!=t)
			cout<<endl;
		M.clear();
	}
return 0;
}

