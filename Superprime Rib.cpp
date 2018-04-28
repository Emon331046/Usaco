/*
ID: hremon32
PROG: sprime
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
vector<int>v;
int digit;
int a[]={2,1,3,5,7,9};
bool primecheck(int n)
{
    if(n==1)return false;
    if(n%2==0&&n!=2)return false;
    for(int i=3;i<=sqrt(n);i+=2)if(n%i==0)return false;
    return true;
}
void making(int cnt,int sum)
{
    if(cnt==digit)
    {
        v.pb(sum);
        return ;
    }
    int d=1;
    if(cnt==0)d=0;
    for(int i=0;i<6;i++)
    {
        if(primecheck((sum*10)+a[i]))making(cnt+1,(sum*10)+a[i]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("sprime.in");
    ofstream fout ("sprime.out");
    fin>>digit;
    making(0,0);
    for(int i=0;i<v.size();i++)fout<<v[i]<<endl;
    return 0;
}

