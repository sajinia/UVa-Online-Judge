/** Author: Sharmin Akter **/
/** Created at: 11/3/2012 2:21:16 AM **/

#include<stdio.h>
#include<string.h>

int flag[39][39],d;
void DFS(int r,int c);

void upMov(int r,int c)
{
    if(flag[r-1][c-1]==1)
        DFS(r-1,c-1);
    if(flag[r-1][c]==1)
        DFS(r-1,c);
    if(flag[r-1][c+1]==1)
        DFS(r-1,c+1);
}
void sydMov(int r,int c)
{
    if(flag[r][c-1]==1)
        DFS(r,c-1);
    if(flag[r][c+1]==1)
        DFS(r,c+1);
}
void lowMov(int r,int c)
{
    if(flag[r+1][c-1]==1)
        DFS(r+1,c-1);
    if(flag[r+1][c]==1)
        DFS(r+1,c);
    if(flag[r+1][c+1]==1)
        DFS(r+1,c+1);
}
void DFS(int r,int c)
{
    flag[r][c]++;

    upMov(r,c);
    sydMov(r,c);
    lowMov(r,c);
}
void input()
{
    char ch;
    int i,j;

    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            ch=getchar();
            if(ch=='0')
                flag[i][j]=0;
            else
                flag[i][j]=1;
        }
        getchar();
    }
}
int eagle()
{
    int i,j,count=0;;

    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            if(flag[i][j]==1)
            {
                DFS(i,j);
                count++;
            }
        }
    }
    return count;
}
main()
{
    int i,j,t=0;

    while(scanf("%d",&d)==1)
    {
        getchar();
        memset(flag,-1,sizeof(flag));

        input();

        printf("Image number %d contains %d war eagles.\n",++t,eagle());
    }
return 0;
}

