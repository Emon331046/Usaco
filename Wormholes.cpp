/*
ID: hremon32
PROG: wormhole
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
int n;
int par[13];
int nxt[14];
int cnt=0;
bool cycle()
{
    for(int i=1; i<=n; i++)
    {
        int pos=i;
        for(int j=0; j<n; j++)
        {
            pos=nxt[par[pos]];
        }
        if(pos!=0)return 1;
    }
    return 0;
}
void func()
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(par[i]==0)break;
    }
    if(i>n)
    {
        if(cycle())
        {
            cnt++;
            return ;
        }
        else return ;
    }
    for(int j=i+1; j<=n; j++)
    {
        if(par[j]==0)
        {
            par[j]=i;
            par[i]=j;
            func();
            par[i]=0;
            par[j]=0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("wormhole.in");
    ofstream fout ("wormhole.out");
    fin>>n;
    int x[14],y[14];
    for(int i=1; i<=n; i++)
    {
        fin>>x[i]>>y[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i]<x[j]&&y[i]==y[j])
            {
                if(nxt[i]==0||x[nxt[i]]>x[j])nxt[i]=j;
            }
        }
    }
    func();
    fout<<cnt<<endl;
    return 0;
}


