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
ifstream fin ("pprime.in");
ofstream fout ("pprime.out");
int a[100000000/32+1];
int start,endd;
bool palindrome(int n)
{
    int s[10];
    int i=0;
    while(n!=0)
    {
        s[i]=n%10;
        i++;
        n/=10;
    }
    for(int j=0;j<i/2;j++)if(s[j]!=s[i-j-1])return false;
    return true;
}
bool check(int n,int pos)
{
    return n&(1<<pos);
}
int sett(int n,int pos)
{
    return n|(1<<pos);
}
void sieve()
{
    for(int i=3; i<sqrt(endd)+10; i+=2)
    {
        if(!check(a[i/32],i&32))
        {
            for(int j=i*i; j<endd; j+=i+i)a[j/32]=sett(a[j/32],j&32);
        }
    }
    if(start<=2)fout<<2<<endl;
    if(start%2==0)start++;
    for(int i=start; i<=endd; i+=2)
    {
        if(i%2!=0&&check(a[i/32],i&32)==0)
        {
            if(palindrome(i))fout<<i<<endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    fin>>start>>endd;
    sieve();
    return 0;
}


