/** Author: Sharmin Akter **/
/** Created at: 11/22/2012 4:19:56 AM **/

#include<stdio.h>
#include<string.h>

int maxm(int p,int q)
{
    if(p>q)
        return p;
    else if(q>p)
        return q;
    return 0;
}
int main()
{
    int i,j,u,b,c,m,n,x,a[50],s[50],len[40][40],dir[40][40];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a[x]=i;
    }

    while(scanf("%d",&x)==1)
    {
        s[x]=1;
        for(i=2;i<=n;i++)
        {
            scanf("%d",&x);
            s[x]=i;
        }
        u=n*2;
        b=u+4;
        c=b+4;
        memset(len,0,sizeof(len));
        memset(dir,-1,sizeof(dir));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i]==s[j])
                {
                    len[i][j]=len[i-1][j-1]+1;
                    dir[i][j]=c;
                }
                else
                {
                    x=maxm(len[i-1][j],len[i][j-1]);
                    if(!x)
                    {
                        len[i][j]=len[i-1][j];
                        dir[i][j]=u;
                    }
                    else
                    {
                        len[i][j]=x;
                        if(x==len[i-1][j])
                            dir[i][j]=u;
                        if(x==len[i][j-1])
                            dir[i][j]=b;
                    }
                }
            }
        }
        printf("%d\n",len[n][n]);
    }
return 0;
}

