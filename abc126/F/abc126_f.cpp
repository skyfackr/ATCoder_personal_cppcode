#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define regi register int
using namespace std;
ll m,k;
void spj_m1()
{
    if (k==0) cout<<"0 0 1 1"<<endl;
        else cout<<"-1"<<endl;
    exit(EXIT_SUCCESS);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>k;
    if (m==1) spj_m1();
    if (k>((1<<m)-1))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<k;
    for (regi i=0;i<=((1<<m)-1);i++)
    {
        if (i==k) continue;
        cout<<" "<<i;
    }
    cout<<" "<<k;
    for (regi i=((1<<m)-1);i>=0;i--)
    {
        if (i==k) continue;
        cout<<" "<<i;
    }
    return 0;
}