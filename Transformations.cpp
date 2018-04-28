/*
ID: hremon32
PROG: transform
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

int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("transform.in");
    ofstream fout ("transform.out");
    int n;
    fin>>n;
    //cin>>n;
    char c[12][12];
    char s[12][12];
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)fin>>s[i][j];
    int flag=0;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)
        {
            fin>>c[i][j];
        }
    int i,j,k,l;

    if(flag==0)
    {
        //270
        flag=1;
        for( i=0,k=n-1; i<n; i++,k--)for(j=0,l=0; j<n; j++,l++)if(s[i][j]!=c[l][k])flag=0;
    }
    if(flag==0)
    {
        //180
        flag=2;
        for( i=0,k=n-1; i<n; i++,k--)for(j=0,l=n-1; j<n; j++,l--)if(s[i][j]!=c[k][l])flag=0;
    }
    if(flag==0)
    {
        //90
        flag=3;
        for( i=0,k=0; i<n; i++,k++)for(j=0,l=n-1; j<n; j++,l--)if(s[i][j]!=c[l][k])flag=0;
    }
    if(flag==0)
    {
        //270
        flag=3;
        for( i=0,k=n-1; i<n; i++,k--)for(j=0,l=0; j<n; j++,l++)if(s[i][j]!=c[l][k])flag=0;
    }
    if(flag==0)
    {
        //reflect
        flag=4;
        for( i=0,k=0; i<n; i++,k++)for(j=0,l=n-1; j<n; j++,l--)if(s[i][j]!=c[k][l])flag=0;
    }
    if(flag==0)
    {
        //reflect2
        flag=5;
        for( i=0,k=n-1; i<n; i++,k--)for(j=0,l=n-1; j<n; j++,l--)if(s[i][j]!=c[l][k])flag=0;
        if(flag==0)
        {
            //reflect
            flag=5;
            for( i=0,k=n-1; i<n; i++,k--)for(j=0,l=0; j<n; j++,l++)if(s[i][j]!=c[k][l])flag=0;
        }
        if(flag==0)
        {
            flag=5;
            for( i=0,k=0; i<n; i++,k++)for(j=0,l=0; j<n; j++,l++)if(s[i][j]!=c[l][k])flag=0;
        }
    }
    if(flag==0)
    {
        //reflect
        flag=6;
        for( i=0; i<n; i++)for(j=0; j<n; j++)if(s[i][j]!=c[i][j])flag=0;
    }
    if(flag==0)flag=7;
    fout<<flag<<endl;
    return 0;
}

