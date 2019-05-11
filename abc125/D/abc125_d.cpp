#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define regi register int
ll total;
int minn=INT_MAX;
int minusnum,n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (regi i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if (x<0) minusnum++;
        x=abs(x);
        minn=min(minn,x);
        total+=x;
    }
    minusnum%=2;
    if (minusnum) total-=2*minn;
    cout<<total<<endl;
    return 0;
}