/** Author: Sharmin Akter **/
/** Created at: 7/30/2012 12:38:58 AM **/

#include<stdio.h>
#include<string.h>
#include<queue>
#include<iostream>
using namespace std;

queue<pair<int,int> > q;
int flag[9][9];

void upMove(int rs,int cs,int i)
{
    if((rs-2)>=1)
    {
        if((cs+1)<=8)
        {
            if(flag[rs-2][cs+1]<0)
            {
                q.push(make_pair(rs-2,cs+1));
                flag[rs-2][cs+1]=i+1;
            }
        }
        if((cs-1)>=1)
        {
            if(flag[rs-2][cs-1]<0)
            {
                q.push(make_pair(rs-2,cs-1));
                flag[rs-2][cs-1]=i+1;
            }
        }
    }
}
void lowMove(int rs,int cs,int i)
{
    if((rs+2)<=8)
    {
        if((cs+1)<=8)
        {
            if(flag[rs+2][cs+1]<0)
            {
                q.push(make_pair(rs+2,cs+1));
                flag[rs+2][cs+1]=i+1;
            }
        }
        if((cs-1)>=1)
        {
            if(flag[rs+2][cs-1]<0)
            {
                q.push(make_pair(rs+2,cs-1));
                flag[rs+2][cs-1]=i+1;
            }
        }
    }
}
void rytMove(int rs,int cs,int i)
{
    if((cs+2)<=8)
    {
        if((rs+1)<=8)
        {
            if(flag[rs+1][cs+2]<0)
            {
                q.push(make_pair(rs+1,cs+2));
                flag[rs+1][cs+2]=i+1;
            }
        }
        if((rs-1)>=1)
        {
            if(flag[rs-1][cs+2]<0)
            {
                q.push(make_pair(rs-1,cs+2));
                flag[rs-1][cs+2]=i+1;
            }
        }
    }
}
void leftMove(int rs,int cs,int i)
{
    if((cs-2)>=1)
    {
        if((rs+1)<=8)
        {
            if(flag[rs+1][cs-2]<0)
            {
                q.push(make_pair(rs+1,cs-2));
                flag[rs+1][cs-2]=i+1;
            }
        }
        if((rs-1)>=1)
        {
            if(flag[rs-1][cs-2]<0)
            {
                q.push(make_pair(rs-1,cs-2));
                flag[rs-1][cs-2]=i+1;
            }
        }
    }
}
int main()
{
    int rs,cs,rd,cd;
    string s,d;

    while(cin>>s)
    {
        memset(flag,-1,sizeof(flag));

        rs=(s[0]-96);
        cs=(s[1]-48);

        cin>>d;
        rd=(d[0]-96);
        cd=(d[1]-48);

        q.push(make_pair(rs,cs));
        flag[rs][cs]++;

        while(!q.empty())
        {
            rs=q.front().first;
            cs=q.front().second;

            if(rs==rd && cs==cd)
                break;
            upMove(rs,cs,flag[rs][cs]);
            lowMove(rs,cs,flag[rs][cs]);
            rytMove(rs,cs,flag[rs][cs]);
            leftMove(rs,cs,flag[rs][cs]);

            q.pop();
        }
        cout<<"To get from "<<s<<" to "<<d<<" takes "<<flag[rs][cs]<<" knight moves."<<endl;

        while(!q.empty())
            q.pop();
    }
return 0;
}
