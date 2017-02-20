/** Author: Sharmin Akter **/
/** Created at: 2/4/2012 3:23:50 AM **/

#include<stdio.h>
int main(){
    char ch;
    while((ch=getchar())!=EOF){
            
            if(ch=='E'||ch=='e')
                printf("q");
            else if(ch=='R'||ch=='r')
                printf("w");
            else if(ch=='T'||ch=='t')
                printf("e");
            else if(ch=='Y'||ch=='y')
                printf("r");
            else if(ch=='U'||ch=='u')
                printf("t");
            else if(ch=='I'||ch=='i')
                printf("y");
            else if(ch=='O'||ch=='o')
                printf("u");
            else if(ch=='P'||ch=='p')
                printf("i");
            else if(ch=='[')
                printf("o");
			else if(ch==']')
                printf("p");
            else if(ch=='D'||ch=='d')
                printf("a");
            else if(ch=='F'||ch=='f')
                printf("s");
            else if(ch=='G'||ch=='g')
                printf("d");
            else if(ch=='H'||ch=='h')
                printf("f");
            else if(ch=='J'||ch=='j')
                printf("g");
            else if(ch=='K'||ch=='k')
                printf("h");
            else if(ch=='L'||ch=='l')
                printf("j");
            else if(ch==';')
                printf("k");
	        else if(ch=='C'||ch=='c')
                printf("z");
            else if(ch=='V'||ch=='v')
                printf("x");
            else if(ch=='B'||ch=='b')
                printf("c");
            else if(ch=='N'||ch=='n')
                printf("v");
            else if(ch=='M'||ch=='m')
                printf("b");
            else if(ch==',')
                printf("n");
            else if(ch=='.')
                printf("m");
            else if(ch=='/')
                printf(",");
            else if(ch=='2')
                printf("`");
            else if(ch=='3')
                printf("1");
            else if(ch=='4')
                printf("2");
            else if(ch=='5')
                printf("3");
            else if(ch=='6')
                printf("4");
            else if(ch=='7')
                printf("5");
            else if(ch=='8')
                printf("6");
            else if(ch=='9')
                printf("7");
            else if(ch=='0')
                printf("8");
            else if(ch=='-')
                printf("9");
            else if(ch=='=')
                printf("0");
            else if(ch=='\\')
                printf("[");
            else if(ch=='\'')
                printf("l");

            else 
                printf("%c",ch);
    }

    return 0;
}

