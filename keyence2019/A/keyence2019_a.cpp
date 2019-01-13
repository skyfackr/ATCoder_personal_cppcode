#include<bits/stdc++.h>
using namespace std;
#define regi register int
inline void py()
{
    cout<<"YES"<<endl;
    return ;
}
inline void pn()
{
    cout<<"NO"<<endl;
    return ;
}
bool got[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (regi i=1;i<=4;i++)
    {
        int n;
        cin>>n;
        got[n]=true;
    }
    if (got[1]&&got[9]&&got[7]&&got[4]) py();
        else pn();
    return 0;
}