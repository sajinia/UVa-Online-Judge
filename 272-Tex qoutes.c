/** Author: Sharmin Akter **/
/** Created at: 10/23/2012 8:20:58 PM **/

#include<stdio.h>

int main(){

	int c=0;
	char ch;

	while((ch=getchar())!=EOF){

		if(ch=='"'){
			c++;
			if(c&1)
				printf("``");
			else
				printf("''");
		}
		else
			printf("%c",ch);
	}
return 0;
}

