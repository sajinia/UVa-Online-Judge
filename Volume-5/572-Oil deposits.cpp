/** Author: Sharmin Akter **/
/** Created at: 10/23/2012 9:19:56 PM **/

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int oil[101][101];
void DFS(int r,int c);

void input(int r,int c)
{
    char ch;
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            ch=getchar();
            if(ch=='*')
                oil[i][j]=0;
            else
                oil[i][j]=1;
        }
        getchar();
    }
}
void upMov(int r,int c)
{
    if(oil[r-1][c-1]==1)
        DFS(r-1,c-1);
    if(oil[r-1][c]==1)
        DFS(r-1,c);
    if(oil[r-1][c+1]==1)
        DFS(r-1,c+1);
}
void sydMov(int r,int c)
{
    if(oil[r][c-1]==1)
        DFS(r,c-1);
    if(oil[r][c+1]==1)
        DFS(r,c+1);
}
void lowMov(int r,int c)
{
    if(oil[r+1][c-1]==1)
        DFS(r+1,c-1);
    if(oil[r+1][c]==1)
        DFS(r+1,c);
    if(oil[r+1][c+1]==1)
        DFS(r+1,c+1);
}
void DFS(int r,int c)
{
    oil[r][c]++;
    upMov(r,c);
    sydMov(r,c);
    lowMov(r,c);
}

/*** another procedure by making individual functions ***


int uplft(int r,int c)
{
    if(oil[r-1][c-1])
        return 1;
    else
        return 0;
}
int up(int r,int c)
{
    if(oil[r-1][c])
        return 1;
    else
        return 0;
}
int upr8(int r,int c)
{
    if(oil[r-1][c+1])
        return 1;
    else
        return 0;
}
int left(int r,int c)
{
    if(oil[r][c-1])
        return 1;
    else
        return 0;
}
int r8(int r,int c)
{
    if(oil[r][c+1])
        return 1;
    else
        return 0;
}
int lwlft(int r,int c)
{
    if(oil[r+1][c-1])
        return 1;
    else
        return 0;
}
int low(int r,int c)
{
    if(oil[r+1][c])
        return 1;
    else
        return 0;
}
int lwr8(int r,int c)
{
    if(oil[r+1][c+1])
        return 1;
    else
        return 0;
}
void DFS(int r,int c)
{
    oil[r][c]=2;

    if(uplft(r,c))
        DFS(r-1,c-1);
    if(up(r,c))
        DFS(r-1,c);
    if(upr8(r,c))
        DFS(r-1,c+1);
    if(left(r,c))
        DFS(r,c-1);
    if(r8(r,c))
        DFS(r,c+1);
    if(lwlft(r,c))
        DFS(r+1,c-1);
    if(low(r,c))
        DFS(r+1,c);
    if(lwr8(r,c))
        DFS(r+1,c+1);
}*/
main()
{
    int r,c,i,j,count;

    while(cin>>r>>c)
    {
        if(r==0 && c==0)
            break;
        count=0;
        memset(oil,-1,sizeof(oil));
        getchar();
        input(r,c);

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(oil[i][j]==1)
                {
                    DFS(i,j);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
return 0;
}
