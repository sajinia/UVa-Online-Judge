/** Author: Sharmin Akter **/
/** Created at: 9/3/2013 12:26:42 AM **/

#include<stdio.h>

main()
{
    long fac[15],der[15],j,f=1,n,t;

    fac[0]=1;
	fac[1]=1;

	for(j=2;j<=13;j++)
	{
		f*=j;
		fac[j]=f;
    }

    der[1]=0;
    der[2]=1;

    for(j=3;j<=13;j++)
    {
        der[j]=(j-1)*(der[j-1]+der[j-2]);
    }

    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld",&n);

        printf("%ld/%ld\n",der[n],fac[n]);
    }

return 0;
}
