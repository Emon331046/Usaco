/*
ID: hremon32
PROG: friday
LANG: C++11
*/
#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int day=13,n;
    fin>>n;
    int coun_day[ ]={0,0,0,0,0,0,0,0,0};
    for(int i=1900; i<1900+n; i++)
    {
        int leap=0;
        if(i%4==0&&i%100!=0)leap=1;
        if(i%400==0)leap=1;
        for(int j=1; j<13; j++)
        {
            day=day%7;
            coun_day[day]++;
            if(j==4||j==6||j==9||j==11)
            {
                day+=30;
            }
            else if(j==2&&leap==1)
            {
                day+=29;
            }
            else if(j==2)
            {
                day+=28;
            }
            else
            {
                day+=31;
            }
        }
    }
    fout<<coun_day[6];
    for(int i=0; i<6; i++)fout<<' '<<coun_day[i];
    fout<<endl;
    return 0;
}
