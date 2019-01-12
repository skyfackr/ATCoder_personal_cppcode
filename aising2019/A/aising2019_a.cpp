#include<bits/stdc++.h>
using namespace std;
int n,w,h;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>h>>w;
    cout<<(n-h+1)*(n-w+1)<<endl;
    return 0;
}