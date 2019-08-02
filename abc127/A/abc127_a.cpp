#include<bits/stdc++.h>
#define regi register int
#define ll long long
using namespace std;
ll a,b;
ll childcost;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b;
    childcost=b/2;
    if (a<=5) cout<<"0"<<endl;
        else if (a>=6&&a<=12) cout<<childcost<<endl;
            else cout<<b<<endl;
    return 0;
}