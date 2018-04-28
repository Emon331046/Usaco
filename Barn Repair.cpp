/*
ID: hremon32
PROG: barn1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int n,i,j;
  ifstream fin ("barn1.in");
    ofstream fout ("barn1.out");
    int s,m,n;
    int sum[10000],a[10000];
    fin>>s>>m>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    sort(a,a+n);
    sum[0]=0;
    for(int i=1;i<n;i++)
    {
        sum[i]=a[i]-a[i-1]-1;
    }
    sort(sum,sum+n);
    int ans=0;
    int d=0;
    for(int i=n-1;i>=0;i--)
    {
        if(d==s-1)break;
        ans+=sum[i];
        d++;
    }
    ans=a[n-1]-a[0]-ans+1;
    fout<<ans<<endl;
    return 0;
}

