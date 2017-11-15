/** Author: Sharmin Akter **/
/** Created at: 2/13/2012 12:47:18 AM **/

#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int i;
	char ch;
	vector<char> b,v,t;

	b.push_back('D');
	b.push_back('O');
	b.push_back('N');
	b.push_back('E');

	while(1){
		while((ch=getchar())!='\n'){
			if(ch>=65 && ch<=90||ch>=97 && ch<=122){
				if(ch>=97 && ch<=122)
					ch-=32;
				v.push_back(ch);
				t.push_back(ch);
			}
		}
		if(v==b)
			break;
        reverse(t.begin(),t.end());
		if(v==t)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    v.clear();
    t.clear();
	}
return 0;
}
