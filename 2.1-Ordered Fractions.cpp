/*
ID: hremon32
PROG: frac1
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
class comp
{
public:
    bool operator()(pii a,pii b)
    {
        return a.first*b.second<a.second*b.first;
    }
};
set< pii , comp >s;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void func(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int g=gcd(i,j);
            s.insert({i/g,j/g});
        }
    }
    s.insert({0,1});
    s.insert({1,1});
}

int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("frac1.in");
    ofstream fout ("frac1.out");
    int n;
    fin>>n;
    func(n);
    set<pii,comp>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        fout<<it->first<<'/'<<it->second<<endl;
    }
    return 0;
}

