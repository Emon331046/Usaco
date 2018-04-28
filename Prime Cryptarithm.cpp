/*
ID: hremon32
PROG: crypt1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int func(int a,int b,int c,int d,int e)
{
    a=a*100+b*10+c;
    int q1,q2;
    q1=a*d;
    q2=a*e;
    if(q1>999||q2>999)return 0;
    int sum=q1*10+q2;
    int temp=sum;
    while(temp!=0)
    {
        if(mp[temp%10]==0)return 0;
        temp/=10;
    }
    temp=q1;
    while(temp!=0)
    {
        if(mp[temp%10]==0)return 0;
        temp/=10;
    }
    temp=q2;

    while(temp!=0)
    {
        if(mp[temp%10]==0)return 0;
        temp/=10;
    }
    return 1;
}
int main()
{
    ifstream fin ("crypt1.in");
    ofstream fout ("crypt1.out");
    int n;
    vector<int>v;
    fin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        fin>>x;
        mp[x]=1;
        v.push_back(x);
    }
    if(n<5)fout<<"0"<<endl;
    else
    {
        int cnt=0;
        int a,b,c,d,e,i,j,k,l,m;
        for(i=0; i<n; i++)
        {
            a=v[i];
            for(j=0; j<n; j++)
            {
                b=v[j];
                for(k=0; k<n; k++)
                {
                    c=v[k];
                    for(l=0; l<n; l++)
                    {
                        d=v[l];
                        for(m=0; m<n; m++)
                        {
                            e=v[m];
                            cnt+=func(a,b,c,d,e);
                        }
                    }

                }
            }
        }
        fout<<cnt<<endl;
    }
    return 0;
}

