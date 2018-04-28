/*
ID: hremon32
PROG: ariprog
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
vector<pii>v;
class comp
{
public:
    bool operator()(pii a,pii b)
    {
        if(a.second==b.second)return a.first<b.first;
        return a.second <b.second;
    }
};
bool a[125001];
int s[31375];
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("ariprog.in");
    ofstream fout ("ariprog.out");
    int   d=0;
    int n,m;
    fin>>m>>n;
    for(int i=0; i<=n; i++)for(int j=i; j<=n; j++)
        {
            int tt=(i*i)+(j*j);
            if(a[tt]==0)s[d++]=tt;
            a[tt]=true;
        }
    sort(s,s+d);

    //cout<<d<<endl;
    int tst=(s[d-1]-s[0])/(m-1);
    for(int i=0; i+m-1<d; i++)
    {
        //cout<<s[i]<<endl;
        for(int j=1; j<=s[d-1]; j++)
        {
            int flag=1;
            if(s[i]+j*(m-1)>s[d-1])break;
            for(int k=1; k<m/2+1; k++)
            {
                if(a[s[i]+(k*j)]==0||a[s[i]+(m-k)*j]==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                //cout<<s[i]<<' '<<j<<' '<<flag<<endl;
                v.push_back(pii(s[i],j));
            }
        }
    }
    if(v.size()==0)fout<<"NONE"<<endl;
    else
    {
    sort(v.begin(),v.end(),comp());
    for(int i=0;i<v.size();i++)fout<<v[i].first<<' '<<v[i].second<<endl;
    }
    //cout<<v.size()<<endl;
    return 0;
}


