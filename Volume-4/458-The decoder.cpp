/** Author: Sharmin Akter **/
/** Created at: 10/23/2012 8:55:58 PM **/

#include<stdio.h>

int main(){

	char ch;

	while((ch=getchar())!=EOF){

		if(ch=='\n'){}

		else
			printf("%c",ch-7);

		if(ch=='\n')
			printf("\n");
}
return 0;
}

