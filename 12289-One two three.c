/** Author: Sharmin Akter **/
/** Created at: 11/4/2011 8:10:02 PM **/

#include<stdio.h>
#include<string.h>

int main(){
    int i,t;
    char ch[10];

    scanf("%d",&t);
    for(i=1;i<=t;i++){

        scanf("%s",ch);

        if(strlen(ch)==5)
            printf("3\n");
        else if((ch[0]=='o'&&ch[1]=='n')||(ch[1]=='n'&&ch[2]=='e')||(ch[2]=='e'&&ch[0]=='o'))
            printf("1\n");
        else
            printf("2\n");

    }
    return 0;
}
