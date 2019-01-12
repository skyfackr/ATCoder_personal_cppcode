#include<bits/stdc++.h>
using namespace std;
#define regi register int
int n,p,a,b;
int n1,n2,n3,n4;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a>>b;
    n1=n/3;
    for (regi i=1;i<=n;i++)
    {
        cin>>p;
        if (p<=a) n2++;
        if (a<p&&p<=b) n3++;
        if (p>b) n4++;
    }
    cout<<min(n1,min(n2,min(n3,n4)))<<endl;
    return 0;
}