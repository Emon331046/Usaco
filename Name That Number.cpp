/*
ID: hremon32
PROG: namenum
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

#define mod 1000000007
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define PI acos(-1.00)
#define pb push_back
#define ppb pop_back
long long n;
bool func(string s)
{
    long long ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='B'||s[i]=='C')ans=(ans*10)+2;
        else if(s[i]=='D'||s[i]=='E'||s[i]=='F')ans=(ans*10)+3;
        else if(s[i]=='G'||s[i]=='H'||s[i]=='I')ans=(ans*10)+4;
        else if(s[i]=='L'||s[i]=='K'||s[i]=='J')ans=(ans*10)+5;
        else if(s[i]=='M'||s[i]=='N'||s[i]=='O')ans=(ans*10)+6;
        else if(s[i]=='R'||s[i]=='S'||s[i]=='P')ans=(ans*10)+7;
        else if(s[i]=='U'||s[i]=='T'||s[i]=='V')ans=(ans*10)+8;
        else if(s[i]=='W'||s[i]=='Y'||s[i]=='X')ans=(ans*10)+9;
        else ans=(ans*10)+1;
    }
    if(ans==n)return 1;
    return 0;
}
int main()
{
   ifstream fin ("namenum.in"),fdict ("dict.txt");
   ofstream fout ("namenum.out");
   //ifstream fdict ("dict.txt");

    fin>>n;
    string s;
    int flag=0;
    while(fdict>>s)
    {
        //cout<<s<<endl;
        if(func(s))
        {
            fout<<s<<endl;
            flag=1;
        }
    }
    if(flag==0)fout<<"NONE"<<endl;
    return 0;
}

