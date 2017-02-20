/** Author: Sharmin Akter **/
/** Created at: 2/4/2012 11:58:16 PM **/

#include<stdio.h>

int main(){

	int i,p,t;
	char ch;
	
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		p=0;
		if(i==1)
			getchar();
		while((ch=getchar())!='\n'){
			
			if(ch=='a'||ch=='d'||ch=='g'||ch=='j'||ch=='m'||ch=='p'||ch=='t'||ch=='w'||ch==' ')
				p++;
			else if(ch=='b'||ch=='e'||ch=='h'||ch=='k'||ch=='n'||ch=='q'||ch=='u'||ch=='x')
				p+=2;
			else if(ch=='c'||ch=='f'||ch=='i'||ch=='l'||ch=='o'||ch=='r'||ch=='v'||ch=='y')
				p+=3;
			else if(ch=='s'||ch=='z')
				p+=4;
		}
		printf("Case #%d: %d\n",i,p);
	}
return 0;
}

