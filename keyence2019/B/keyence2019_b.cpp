#include<bits/stdc++.h>
using namespace std;
string ans="keyence";
string s;
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
inline void lasttest()
{
    int l=0,r=6;
    while (ans[l]==s[l]&&l<=6) l++;
    while (ans[r]==s[s.size()-7+r]&&r>=0) r--;
    if (l==r+1||l==7||r==0) py();
        else pn();
    return ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    if (s.find(ans)!=string::npos)
    {
        py();
        return 0;
    }
    if (s.size()<7)
    {
        pn();
        return 0;
    }
    if (s.size()==7)
    {
        if (s==ans) py();
            else pn();
        return 0;
    }
    if (s[0]!=ans[0]&&s[s.size()-1]!=ans[6])
    {
        pn();
        return 0;
    }
    if (s[0]!=ans[0]||s[s.size()-1]!=ans[6])
    {
        if (s.find(ans)!=string::npos) py();
            else pn();
        return 0;
    }
    lasttest();
    return 0;
}