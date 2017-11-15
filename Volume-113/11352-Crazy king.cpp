/** Author: Sharmin Akter **/
/** Created at: 8/19/2012 6:48:00 AM **/

#include<stdio.h>
#include<string.h>
#include<queue>
#include<iostream>
using namespace std;

queue<pair<int,int> > q;
int forest[101][101],rd,cd,row,colm;

void upMov(int r,int c)
{
    if((forest[r-1][c-1]==-5||forest[r-1][c-1]==-4)&&(r-1>=0)&&(c-1>=0))
    {
        q.push(make_pair(r-1,c-1));
        forest[r-1][c-1]=forest[r][c]+1;
    }
    if((forest[r-1][c]==-5||forest[r-1][c]==-4)&&(r-1>=0))
    {
        q.push(make_pair(r-1,c));
        forest[r-1][c]=forest[r][c]+1;
    }
    if((forest[r-1][c+1]==-5||forest[r-1][c+1]==-4)&&(r-1>=0)&&(c+1<colm))
    {
        q.push(make_pair(r-1,c+1));
        forest[r-1][c+1]=forest[r][c]+1;
    }
}
void sydMov(int r,int c)
{
    if((forest[r][c-1]==-5||forest[r][c-1]==-4)&&(c-1>=0))
    {
        q.push(make_pair(r,c-1));
        forest[r][c-1]=forest[r][c]+1;
    }
    if((forest[r][c+1]==-5||forest[r][c+1]==-4)&&(c+1<colm))
    {
        q.push(make_pair(r,c+1));
        forest[r][c+1]=forest[r][c]+1;
    }
}
void lowMov(int r,int c)
{
    if((forest[r+1][c-1]==-5||forest[r+1][c-1]==-4)&&(r+1<row)&&(c-1>=0))
    {
        q.push(make_pair(r+1,c-1));
        forest[r+1][c-1]=forest[r][c]+1;
    }
    if((forest[r+1][c]==-5||forest[r+1][c]==-4)&&(r+1<row))
    {
        q.push(make_pair(r+1,c));
        forest[r+1][c]=forest[r][c]+1;
    }
    if((forest[r+1][c+1]==-5||forest[r+1][c+1]==-4)&&(r+1<row)&&(c+1<colm))
    {
        q.push(make_pair(r+1,c+1));
        forest[r+1][c+1]=forest[r][c]+1;
    }
}
void BFS()
{
    int i,j;
    while(!q.empty())
    {
        i=q.front().first;
        j=q.front().second;

        if(i==rd && j==cd)
            return;
        upMov(i,j);
        sydMov(i,j);
        lowMov(i,j);

        q.pop();
    }
}
void upMove(int r,int c)
{
    if((r-2>=0) && (c+1<colm) && (forest[r-2][c+1]==-5))
       forest[r-2][c+1]=-3;
    if((r-2>=0) && (c-1>=0) && forest[r-2][c-1]==-5)
       forest[r-2][c-1]=-3;
}
void lwMove(int r,int c)
{
    if((r+2<row) && (c+1<colm) && forest[r+2][c+1]==-5)
       forest[r+2][c+1]=-3;
    if((r+2<row) && (c-1>=0) && forest[r+2][c-1]==-5)
       forest[r+2][c-1]=-3;
}
void lftMove(int r,int c)
{
    if((r-1>=0) && (c-2>=0) && forest[r-1][c-2]==-5)
       forest[r-1][c-2]=-3;
    if((r+1<row) && (c-2>=0) && forest[r+1][c-2]==-5)
       forest[r+1][c-2]=-3;
}
void r8Move(int r,int c)
{
    if((r-1>=0) && (c+2<colm) && forest[r-1][c+2]==-5)
       forest[r-1][c+2]=-3;
    if((r+1<row) && (c+2<colm) && forest[r+1][c+2]==-5)
       forest[r+1][c+2]=-3;
}
void n8mov()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(forest[i][j]==-2)
            {
                upMove(i,j);
                lwMove(i,j);
                lftMove(i,j);
                r8Move(i,j);
            }
        }
    }
    BFS();
}
void inMtrx()
{
    char ch;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            ch=getchar();
            if(ch=='A')
            {
                q.push(make_pair(i,j));
                forest[i][j]=0;
            }
            else if(ch=='B')
            {
                rd=i;
                cd=j;
                forest[i][j]=-4;
            }
            else if(ch=='Z')
                forest[i][j]=-2;
            else
                forest[i][j]=-5;
        }
        getchar();
    }
    n8mov();
}
void IO()
{
    scanf("%d %d",&row,&colm);
    getchar();
    if((row==0 && colm==0))
    {
        printf("Minimal possible length of a trip is 0\n");
        return;
    }
    else if(row==1 && colm==1)
    {
        getchar();
        printf("Minimal possible length of a trip is 0\n");
        return;
    }
    else
    {
        inMtrx();
        if(forest[rd][cd]==-4)
            printf("King Peter, you can't go now!\n");
        else
            printf("Minimal possible length of a trip is %d\n",forest[rd][cd]);
    }
}
main()
{
    int test;

    scanf("%d",&test);

    while(test--)
    {
        memset(forest,-1,sizeof(forest));
        IO();
        while(!q.empty())
            q.pop();
    }
return 0;
}

