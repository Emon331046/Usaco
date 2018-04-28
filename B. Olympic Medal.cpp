/*
ID: hremon32
PROG:
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
    ifstream fin ("");
    ofstream fout ("");
    int t;
    int a,b,n,m,o;
    vector<long long>x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        x.pb(t);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t;
        y.pb(t);
    }
    cin>>o;
    for(int i=0;i<o;i++)
    {
        cin>>t;
        z.pb(t);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());
    cin>>a>>b;
    double ans;
    double c,d,e;
    c=(y[m-1]*b);
    d=(y[m-1]*b);
    e=z[0]*a;
    ans=sqrt(c/(d+e));
    ans=x[n-1]*ans;
    cout<<fixed;
    cout<<setprecision(10)<<ans<<endl;
    return 0;
}


