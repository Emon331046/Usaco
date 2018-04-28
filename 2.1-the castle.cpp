/*
ID: hremon32
PROG: castle
LANG: C++11
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;
#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
int s[105][105];
int wall[16][10];
int n,m;
int grp,cnt;
int group[55][55];
int vis[55][55];
stack<pii>st;
void dfs(int x,int y)
{
    //cout<<cnt<<' '<<x<<' '<<y<<endl;
    st.push(pii(x,y));
    cnt++;
    vis[x][y]=grp;
    if(wall[s[x][y]][4]==0&&y+1<m&&vis[x][y+1]==0)
    {
   // cout<<s[x][y]<<' '<<"weast"<<s[x][y]<<endl;
        dfs(x,y+1);
    }
    if(wall[s[x][y]][8]==0&&x+1<n&&vis[x+1][y]==0)
    {
    //cout<<cnt<<' '<<"south"<<s[x][y]<<endl;
        dfs(x+1,y);
    }
    if(wall[s[x][y]][1]==0&&y-1>=0&&vis[x][y-1]==0)
    {
    //cout<<cnt<<' '<<"east"<<s[x][y]<<endl;
        dfs(x,y-1);
    }
    if(wall[s[x][y]][2]==0&&x-1>=0&&vis[x-1][y]==0)
    {
    //cout<<cnt<<' '<<"nrth"<<s[x][y]<<endl;
        dfs(x-1,y);
    }

}
void forcnt()
{
    while(!st.empty())
    {
        int x=st.top().first;
        int y=st.top().second;
        group[x][y]=cnt;
        st.pop();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("castle.in");
    ofstream fout ("castle.out");
    fin>>m>>n;
    memset(wall,0,sizeof(wall));
    wall[1][1]=1;
    wall[2][2]=1;
    wall[3][1]=1;
    wall[3][2]=1;
    wall[4][4]=1;
    wall[5][1]=1;
    wall[5][4]=1;
    wall[6][2]=1;
    wall[6][4]=1;
    wall[7][1]=1;
    wall[7][2]=1;
    wall[7][4]=1;
    wall[8][8]=1;
    wall[9][1]=1;
    wall[9][8]=1;
    wall[10][2]=1;
    wall[10][8]=1;
    wall[11][1]=1;
    wall[11][2]=1;
    wall[11][8]=1;
    wall[12][4]=1;
    wall[12][8]=1;
    wall[13][1]=1;
    wall[13][4]=1;
    wall[13][8]=1;
    wall[14][2]=1;
    wall[14][4]=1;
    wall[14][8]=1;
    wall[15][1]=1;
    wall[15][2]=1;
    wall[15][4]=1;
    wall[15][8]=1;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            fin>>s[j][i];
            //cout<<i<<' '<<j<<endl;
        }
    }
    int mx=-1;
    memset(vis,0,sizeof(vis));
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            if(vis[j][i]==0)
            {
                cnt=0;
                grp++;
                dfs(j,i);
                forcnt();
                if(cnt>mx)mx=cnt;
            }
        }
    }
    int fx[]={-1,0};
    int fy[]={0,1};
    int mxcreate=-1,ansx=0,ansy=0;
    char ch;
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j-1>=0&&group[j][i]+group[j-1][i]>mxcreate&&vis[ j][ i ]!=vis[j-1][i])
            {
                mxcreate=group[j][i]+group[j-1][i];
                ansx=j;
                ansy=i;
                ch='N';
            }
             if(i+1<m&&group[j][i]+group[j][i+1]>mxcreate&&vis[ j][ i ]!=vis[j][i+1])
            {
                mxcreate=group[j][i]+group[j][i+1];
                ansx=j;
                ansy=i;
                ch='E';
            }
        }
    }
    fout<<grp<<endl;
    fout<<mx<<endl;
    fout<<mxcreate<<endl;
    fout<<ansx+1<<' '<<ansy+1<<' '<<ch<<endl;
    return 0;
}


