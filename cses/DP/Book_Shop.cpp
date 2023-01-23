#include<bits/stdc++.h>
// #define int long long
#define speed  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(v) v.begin(),v.end()
using namespace std;
vector<int>h,s;
int n,x;
int dp[100001][1001];
int get(int x,int idx)
{
    if(x==0)return 0;
    if(idx>=n)return -1e9;
    if(dp[x][idx]!=-1)return dp[x][idx];
    int ans=0;
    if(x>=h[idx])
    ans=s[idx]+get(x-h[idx],idx+1);
    ans=max(ans,get(x,idx+1));
    // ans=max({s[idx]+get(x-h[idx],idx+1),get(x,idx+1),0});
    return dp[x][idx]=ans;
}
signed main()
{
    speed;
    cin>>n>>x;
    h.resize(n);
    s.resize(n);
    for(int i=0;i<=100000;i++)
    for(int j=0;j<=1000;j++)
    dp[i][j]=-1;
    for(int i=0;i<n;i++)cin>>h[i];
    for(int i=0;i<n;i++)cin>>s[i];
    cout<<get(x,0)<<endl;
    return 0;
}