/*
ID: hremon32
PROG: dualpal
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
bool pal(int n)
{
    int a[32]= {0};
    int i=0;
    int t2=n,t3=n,t4=n,t5=n,t6=n,t7=n,t8=n,t9=n,t10=n;
    while(t2!=0)
    {
        a[i]=t2%2;
        t2/=2;
        i++;
    }
    int j,k;
    int flag=9;
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t3!=0)
    {
        a[i]=t3%3;
        t3/=3;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }
    i=0;
    while(t4!=0)
    {
        a[i]=t4%4;
        t4/=4;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t5!=0)
    {
        a[i]=t5%5;
        t5/=5;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t6!=0)
    {
        a[i]=t6%6;
        t6/=6;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t7!=0)
    {
        a[i]=t7%7;
        t7/=7;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t8!=0)
    {
        a[i]=t8%8;
        t8/=8;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t10!=0)
    {
        a[i]=t10%10;
        t10/=10;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }

    i=0;
    while(t9!=0)
    {
        a[i]=t9%9;
        t9/=9;
        i++;
    }
    for(j=0,k=i-1; j<i/2; j++,k--)if(a[j]!=a[k])
        {
            flag--;
            break;
        }
        //cout<<flag<<endl;
    if(flag>=2)return 1;

    return 0;
}
int main()
{


    ifstream fin ("dualpal.in");
    ofstream fout ("dualpal.out");
    int n,m,cnt=0;
    fin>>n>>m;
    for(int i=m+1; cnt<n; i++)
    {
        if(pal(i))
        {
            fout<<i<<endl;
            cnt++;
        }
    }
    return 0;
}
