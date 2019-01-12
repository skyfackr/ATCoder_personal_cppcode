#include<bits/stdc++.h>
using namespace std;
int h,w;
#define maxn 401
#define regi register int
int now[maxn];
long long ans;
string last,nows;
void nowtest(int x)
{
    if (nows[x]!=last[x]) now[x]=0;
    return ;
}
void nowaddh(int x)
{
    now[x]++;
    return ;
}
void nowaddw(int x)
{
    now[x]++;
    ans++;
    return ;
}
void squaresearch(int x)
{
    if (nows[x]=='#')
    {
        if (x-1>=0) if (nows[x-1]=='.')
        {
            nowaddw(x-1);
            squaresearch(x-1);
        }
        if (x+1<=w) if (nows[x+1]=='.')
        {
            nowaddw(x+1);
            squaresearch(x+1);
        }
    }
    else
    {
        if (x-1>=0) if (nows[x-1]=='#')
        {
            nowaddh(x-1);
            squaresearch(x-1);
        }
        if (x+1<=w) if (nows[x+1]=='#')
        {
            nowaddh(x+1);
            squaresearch(x+1);
        }
    }
    return ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>h>>w;
    cin>>last;
    for (regi i=0;i<=w-1;i++) now[i]=1;
    for (regi i=2;i<=w;i++)
    {
        cin>>nows;
        for (regi j=0;j<=w-1;j++) nowtest(i);
        for (regi j=0;j<=w-1;j++) squaresearch(i);
    }
    cout<<ans<<endl;
    return 0;
}