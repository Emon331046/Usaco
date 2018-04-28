/*
ID: hremon32
PROG: milk3
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
int  vis[22][22][22];
int a,b,c;
set<int>v;
void dfs(int i,int j,int k)
{
    //cout<<i<<' '<<j<<' '<<k<<endl;
    if(vis[i][j][k]==1)return ;
    vis[i][j][k]=1;
    if(i==0)
    {
        v.insert(k);
    }
    if(i!=0)
    {
        int x=b-j;
        int y=c-k;
        y=min(y,i);
        x=min(i,x);
        dfs(i-x,j+x,k);
        dfs(i-y,j,k+y);
    }
    if(j!=0)
    {
        int x=a-i;
        int y=c-k;
        y=min(y,j);
        x=min(j,x);
        dfs(i+x,j-x,k);
        dfs(i,j-y,k+y);
    }
    if(k!=0)
    {
        int x=a-i;
        int y=b-j;
        y=min(y,k);
        x=min(k,x);
        dfs(i+x,j,k-x);
        dfs(i,j+y,k-y);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("milk3.in");
    ofstream fout ("milk3.out");
    fin>>a>>b>>c;
    dfs(0,0,c);
    int flag=0;
    set<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        if(flag==1)fout<<' ';
        fout<<*it;
        flag=1;
    }
    fout<<endl;
    return 0;
}

