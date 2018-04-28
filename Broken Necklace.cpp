/*
ID: hremon32
PROG: beads
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    ifstream fin ("beads.in");
    ofstream fout ("beads.out");
    int r[800]= {0},rr[900]= {0};
    int b[800]= {0},bb[900]= {0};
    char s[800];
    fin>>n;
    fin>>s;
    //cin>>n;
    //cin>>s;
    int coun=0,coun1=0;
    for(i=0,j=n; i<n; i++,j++)s[j]=s[i];
    for(i=0,j=n-1+n; i<n+n; i++,j--)
    {
        if(s[i]=='r'||s[i]=='w')
        {
            coun++;
            r[i]=coun;
        }
        else coun=0;
        if(s[j]=='r'||s[j]=='w')
        {
            coun1++;
            rr[j]=coun1;
        }
        else coun1=0;
    }
    coun=0;
    coun1=0;
    for(i=0,j=n-1+n; i<n+n; i++,j--)
    {
        if(s[i]=='b'||s[i]=='w')
        {
            coun++;
            b[i]=coun;
        }
        else coun=0;
        if(s[j]=='b'||s[j]=='w')
        {
            coun1++;
            bb[j]=coun1;
        }
        else coun1=0;
    }
    int mx=0;
    for(i=-1; i<n+n; i++)
    {
        int tm;
        if(i==-1)tm=0;
        else tm=max(r[i],b[i]);
        int tmp=max(rr[i+1],bb[i+1]);
        if(tm+tmp>mx)
        {
            mx=tm+tmp;
        }
    }
    if(mx>n)mx=n;
    fout<<mx<<endl;
    //cout<<mx<<endl;
}
