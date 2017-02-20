/** Author: Sharmin Akter **/
/** Created at: 8/23/2012 7:02:42 PM **/

#include<stdio.h>
#include<string.h>
#include<queue>
#include<iostream>
using namespace std;

queue<pair<int,int> > q;
int flag[1001][1001],row,colm;

void upMov(int r,int c)
{
    if((flag[r-1][c]==0)&&(r-1>=0))
    {
        q.push(make_pair(r-1,c));
        flag[r-1][c]=flag[r][c]+1;
    }
}
void sydMov(int r,int c)
{
    if((flag[r][c-1]==0)&&(c-1>=0))
    {
        q.push(make_pair(r,c-1));
        flag[r][c-1]=flag[r][c]+1;
    }
    if((flag[r][c+1]==0)&&(c+1<colm))
    {
        q.push(make_pair(r,c+1));
        flag[r][c+1]=flag[r][c]+1;
    }
}
void lowMov(int r,int c)
{
    if((flag[r+1][c]==0)&&(r+1<row))
    {
        q.push(make_pair(r+1,c));
        flag[r+1][c]=flag[r][c]+1;
    }
}
void BFS(int r,int c)
{
    int i,j;
    while(!q.empty())
    {
        i=q.front().first;
        j=q.front().second;

        if(i==r && j==c)
            return;
        upMov(i,j);
        sydMov(i,j);
        lowMov(i,j);

        q.pop();
    }
}
void IO(int b)
{
    int r,c,n,rs,cs,rd,cd;
    for(int i=0;i<b;i++)
    {
        scanf("%d %d",&r,&n);
        for(int j=0;j<n;j++)
        {
            cin>>c;
            flag[r][c]=-1;
        }
    }
    scanf("%d %d %d %d",&rs,&cs,&rd,&cd);

    q.push(make_pair(rs,cs));
    BFS(rd,cd);

    printf("%d\n",flag[rd][cd]);
}
void clear()
{
    memset(flag,-1,sizeof(flag));
    while(!q.empty())
        q.pop();
    for(int i=0;i<row;i++)
        for(int j=0;j<colm;j++)
            flag[i][j]=0;
}
main()
{
    int b;

    while(scanf("%d %d",&row,&colm)==2)
    {
        if(row==0 && colm==0)
            break;
        clear();
        scanf("%d",&b);
        IO(b);
    }
return 0;
}
