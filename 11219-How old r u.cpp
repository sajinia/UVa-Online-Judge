/** Author: Sharmin Akter **/
/** Created at: 1/1/2012 3:45:22 AM **/

#include<cstdio>
#include<iostream>

using namespace std;

int main(){

	int i,j,bd,bm,by,cd,cm,cy,t;
	
	cin>>t;
	
	for(i=1;i<=t;i++){
	
		scanf("%d/%d/%d",&cd,&cm,&cy);
		scanf("%d/%d/%d",&bd,&bm,&by);
		
		if(cd<bd){
		
			cd+=30;
			cd-=bd;
			bm++;
			
			if(cm<bm){
			
				cm+=12;
				cm-=bm;
				by++;
				cy-=by;
				
				if(cy<0)
					
					printf("Case #%d: Invalid birth date\n",i);
					
				else if(cy>130)
				
					printf("Case #%d: Check birth date\n",i);
		
				else
					printf("Case #%d: %d\n",i,cy);
			}
		
			else{
				cy-=by;
				
				if(cy<0)
					
					printf("Case #%d: Invalid birth date\n",i);
					
				else if(cy>130)
				
					printf("Case #%d: Check birth date\n",i);
		
				else
					printf("Case #%d: %d\n",i,cy);
			}
		}
		
		else{
			
			if(cm<bm){
			
				cm+=12;
				cm-=bm;
				by++;
				cy-=by;
				
				if(cy<0)
					
					printf("Case #%d: Invalid birth date\n",i);
					
				else if(cy>130)
				
					printf("Case #%d: Check birth date\n",i);
		
				else
					printf("Case #%d: %d\n",i,cy);
			}
		
			else{
				cy-=by;
				
				if(cy<0)
					
					printf("Case #%d: Invalid birth date\n",i);
					
				else if(cy>130)
				
					printf("Case #%d: Check birth date\n",i);
		
				else
					printf("Case #%d: %d\n",i,cy);
			}
		}
	}
return 0;
}

