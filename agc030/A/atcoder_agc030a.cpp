#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define ll long long
int a,b,c;
ll ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b>>c;
    ans+=b;
    ans+=min(a+b+1,c);
    cout<<ans<<endl;
    return 0;
}