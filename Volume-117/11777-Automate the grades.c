/** Author: Sharmin Akter **/
/** Created at: 5/1/2011 1:23:30 AM **/

#include<stdio.h>
int main() {
long i,t,t1,t2,f,a,c1,c2,c3,c,m;
scanf("%ld",&t);
if(t<100) {
    for(i=1;i<=t;i++) {
        scanf("%ld%ld%ld%ld%ld%ld%ld",&t1,&t2,&f,&a,&c1,&c2,&c3);
        if(t1>=0&&t1<=20&&t2>=0&&t2<=20&&f>=0&&f<=30&&a>=0&&a<=10&&c1>=0&&c1<=20&&c2>=0&&c2<=20&&c3>=0&&c3<=20) {
            if(c1<c2){
                if(c1<c3)
                    c=(c2+c3)/2;
                else
                    c=(c1+c2)/2;}
            else {
                if(c2<c3)
                    c=(c1+c3)/2;
                else
                    c=(c1+c2)/2; }
              m=t1+t2+f+a+c;
              if(m>=90)
                    printf("Case %ld: A\n",i);
              else if(m>=80&&m<90)
                    printf("Case %ld: B\n",i);
              else if(m>=70&&m<80)
                    printf("Case %ld: C\n",i);
              else if(m>=60&&m<70)
                    printf("Case %ld: D\n",i);
              else
                    printf("Case %ld: F\n",i);
            }
        }
  }
return 0;
}
