/*
ID: hremon32
PROG: milk
LANG: C++
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

#define sf1(x) scanf("%d",&x)
#define sfch(ch) scanf("%c",&ch)
#define sfs(s) scanf("%s",&s)
#define pfc(x) printf("Case %d: ",x)
#define pfcn(x) printf("Case %d:\n",x)
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pf4(x,y,z,m) printf("%d %d %d %d\n",x,y,z,m)
#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
class comp
{
public:
    bool operator()(pii a,pii b)
    {
       return a.first<b.first;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("milk.in");
    ofstream fout ("milk.out");
    int dmnd,n;
    fin>>dmnd>>n;
    vector< pii >v;
    int a,b;
    for(int i=0;i<n;i++)
    {
        fin>>a>>b;
        pii t;
        t.first =a;
        t.second=b;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),comp());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(min(dmnd,v[i].second)*v[i].first);
        //cout<<sum<<endl;
        dmnd-=min(dmnd,v[i].second);
        if(dmnd==0)break;
    }
    fout<<sum<<endl;
    return 0;
}

