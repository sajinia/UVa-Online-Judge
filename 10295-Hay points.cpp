/** Author: Sharmin Akter **/
/** Created at: 4/26/2012 12:06:32 AM **/

#include<cstdio>
#include<string>
#include<map>
#include<iostream>
using namespace std;

int main(){

	string s;
	int i,a,b,t,sum;
	map<string,int> m;

	cin>>a>>b;

	for(i=1;i<=a;i++)
	{
	    cin>>s>>t;
	    m[s]=t;
	}
	for(i=1;i<=b;i++)
	{
	    sum=0;
	    while(cin>>s)
	    {
	        if(s[0]=='.')
                break;
            if(m[s])
                sum+=m.find(s)->second;
	    }
	    cout<<sum<<endl;
	}
return 0;
}
