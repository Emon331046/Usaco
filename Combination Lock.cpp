/*
ID: hremon32
PROG: combo
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int nn;
int v[100][100];
int mp[101][101][101];
void func(int i,int n)
{
    int a[5];
    a[0]=(n-2)%nn;
    if(a[0]<0)a[0]=nn-1;
    if(a[0]==0)a[0]=nn;
    a[1]=(n-1)%nn;
    if(a[1]<0)a[1]=nn-1;
    if(a[1]==0)a[1]=nn;
    a[2]=n;
    a[3]=(n+1)%nn;
    if(a[3]==0)a[3]=nn;
    a[4]=(n+2)%nn;
    if(a[4]==0)a[4]=nn;
    v[i][0]=a[0];
    v[i][1]=a[1];
    v[i][2]=a[2];
    v[i][3]=a[3];
    v[i][4]=a[4];
}
int main()
{
    ifstream fin ("combo.in");
    ofstream fout ("combo.out");
    int x,y,z,a,b,c;
    fin>>nn;
    fin>>x>>y>>z;
    func(1,x);
    func(2,y);
    func(3,z);
    fin>>a>>b>>c;
    func(4,a);
    func(5,b);
    func(6,c);
    int cnt=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<5; k++)
            {
                if(mp[v[1][i]][v[2][j]][v[3][k]]==0)
                {
                    mp[v[1][i]][v[2][j]][v[3][k]]=1;
                    cnt++;
                }
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<5; k++)
            {
                if(mp[v[4][i]][v[5][j]][v[6][k]]==0)
                {
                    mp[v[4][i]][v[5][j]][v[6][k]]=1;
                    cnt++;
                }
            }
        }
    }
    fout<<cnt<<endl;
    return 0;
}


