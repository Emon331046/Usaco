/*
ID: hremon32
PROG: skidesign
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
    ifstream fin ("skidesign.in");
    ofstream fout ("skidesign.out");
    vector<int>v;
    int n;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        fin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    ll sum=9999999999999;
    for(int i=v[0];i+17<v[n-1];i++)
    {
        ll temp=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]<i)temp+=((i-v[j])*(i-v[j]));
            else if(v[j]>i+17)temp+=((v[j]-i-17)*(v[j]-i-17));
        }
        sum=min(temp,sum);
    }
    if(sum==9999999999999)sum=0;
    fout<<sum<<endl;
    return 0;
}

