/*
ID: hremon32
PROG: numtri
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
int vis[1005][1005];
int a[1005][1005];
int n;
int func(int line,int pos)
{
    if(line==n) return 0;
    if(vis[line][pos]!=-1) return vis[line][pos];
    int tmp1,tmp2;
    tmp1 = a[line][pos] + func(line+1,pos);
    tmp2 = a[line][pos] + func(line+1,pos+1);
    vis[line][pos] = max(tmp1,tmp2);
    return vis[line][pos];
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("numtri.in");
    ofstream fout ("numtri.out");
    fin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<=i;j++)fin>>a[i][j];
    memset(vis,-1,sizeof(vis));
    fout<<func(0,0)<<endl;
    return 0;
}

