/** Author: Sharmin Akter **/
/** Created at: 4/25/2012 11:44:08 PM **/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main(){

	string s,t;
	int i,j,k,b,m,n,p,I,J;

	cin>>k;

	for(I=1;I<=k;I++)
	{
	    cin>>s>>p;

	    for(J=1;J<=p;J++)
	    {
	        cin>>t;
            i=0;
            while(i<s.size())
            {
                b=0;
                if(t[0]==s[i])
                {
                    for(m=0,n=i;m<t.size(),n<(i+t.size());m++,n++)
                    {
                        if(t[m]==s[n])
                            b++;
                    }
                    if(b==t.size())
                    {
                        printf("y\n");
                        break;
                    }
                    else
                        i++;
                }
                else
                    i++;
            }
            if(b!=t.size())
                printf("n\n");
	    }
	}
return 0;
}
