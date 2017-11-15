/** Author: Sharmin Akter **/
/** Created at: 10/23/2012 8:51:12 PM **/

#include<stdio.h>

int main() {

    long int i,j,k,l,a,f,t;
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/

    scanf("%ld",&t);

    for(i=1;i<=t;i++){

        scanf("%ld %ld",&a,&f);

        if(i>1)
            printf("\n");

        for(l=1;l<=f;l++){


            for(j=1;j<=a;j++){

                for(k=1;k<=j;k++)

                    printf("%ld",j);

                printf("\n");
            }

                for(j=a-1;j>=1;j--){

                        for(k=1;k<=j;k++)

                            printf("%ld",j);

                            printf("\n");
                    }

        if(l!=f)
            printf("\n");
        }


    }
    return 0;
}

