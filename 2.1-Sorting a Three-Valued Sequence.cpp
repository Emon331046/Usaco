/*
ID: hremon32
PROG: sort3
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

int main()
{
    ios::sync_with_stdio(false);
    ifstream fin ("sort3.in");
    ofstream fout ("sort3.out");
    int n,cnt[4]={0},area_1[4]={0},area_2[4]={0},area_3[4]={0};
    int a[1005];
    fin>>n;
    for(int i=0; i<n; i++)
    {
        fin>>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<cnt[1];i++)area_1[a[i]]++;
    for(int i=cnt[1];i<cnt[1]+cnt[2];i++)area_2[a[i]]++;
    for(int i=cnt[1]+cnt[2];i<n;i++)area_3[a[i]]++;
    int coun=0;
    for(int i=cnt[1]+cnt[2];i<n;i++)
    {
        if(a[i]==1)
        {
            if(area_1[3]>0)
            {
                area_1[3]--;
                area_3[3]++;
                area_1[1]++;
                area_3[1]--;
                coun++;
            }
            else
            {
                area_2[3]--;
                area_1[2]--;
                area_3[1]--;
                area_3[3]++;
                area_2[2]++;
                area_1[1]++;
                coun+=2;
            }
        }
        else if(a[i]==2)
        {
            if(area_2[3]>0)
            {
                area_2[3]--;
                area_3[3]++;
                area_2[2]++;
                area_3[2]--;
                coun++;
            }
            else
            {
                area_2[1]--;
                area_1[3]--;
                area_3[2]--;
                area_3[3]++;
                area_2[2]++;
                area_1[1]++;
                coun+=2;
            }
        }
    }
    for(int i=cnt[1];i<cnt[1]+cnt[2];i++)
    {
        if(a[i]==1)
        {
            if(area_1[2]>0)
            {
                area_1[2]--;
                area_2[2]++;
                area_1[1]++;
                area_2[1]--;
                coun++;
            }
        }
    }
    fout<<coun<<endl;
    return 0;
}


