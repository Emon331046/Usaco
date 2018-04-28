/*
ID: hremon32
PROG: pprime
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
int low,high;
int a[]= {0,1,2,3,4,5,6,7,8,9};
int s[10];
int prime(int digit)
{
    int ans=0;
    for(int i=0; i<digit; i++)ans=(ans*10)+s[i];
    //cout<<digit<<endl;
    if(ans%2==0)return 0;
    for(int i=3; i<=sqrt(ans); i+=2)if(ans%i==0)return 0;
    return ans;
}
void palindrome(int l,int h,int cnt)
{
    if(l>h)
    {
        int tmp=prime(cnt);
        //cout<<"ghjf"<<tmp<<endl;
        if(tmp)v.pb(tmp);
        return ;
    }
    for(int i=0; i<=9; i++)
    {
        s[l]=a[i];
        s[h]=a[i];
        palindrome(l+1,h-1,cnt);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("pprime.in");
    ofstream fout ("pprime.out");
    fin>>low>>high;
    int digit_low=0,digit_high=0;
    int tmp=low;
    while(tmp!=0)
    {
        tmp/=10;
        digit_low++;
    }
    tmp=high;
    while(tmp!=0)
    {
        tmp/=10;
        digit_high++;
    }
    for(int i=digit_low; i<=digit_high; i++)
    {
        palindrome(0,i-1,i);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=low&&v[i]<=high)fout<<v[i]<<endl;
        if(v[i]>high)break;
    }
    return 0;
}


