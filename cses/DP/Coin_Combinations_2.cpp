#include<bits/stdc++.h>
// #define int long long
#define speed  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(v) v.begin(),v.end()
using namespace std;
const int mod=1e9+7;
vector<int>c;
int n,x;
int dp[1000001][101];
int get(int val,int idx)
{ 
    if(idx>=n && val!=0)return 0;
    if(val<0)return 0;
    // cout<<"val="<<val<<" idx="<<idx<<endl;
    if(val==0)return 1;
   
    if(dp[val][idx]!=-1)return dp[val][idx];
    int ans=0;
    // for(int i=idx;i<n;i++)
    {
        ans+=(get(val-c[idx],idx)+get(val,idx+1))%mod;
        ans%=mod;
    }
    return dp[val][idx]=ans;
}
signed main()
{
    speed;
    cin>>n>>x;
    c.resize(n);
    for(int i=0;i<1000001;i++)
    for(int j=0;j<101;j++)
    // dp[i][j]=-1;
    assert(2==1);
    for(int i=0;i<n;i++)cin>>c[i];
    cout<<get(x,0)<<endl;
    return 0;
}
