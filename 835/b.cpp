#include<bits/stdc++.h>
#define int long long
#define speed  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
using namespace std;
signed main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vec(26);
        for(auto& u : s)vec[u-'a']=1;
        int ans=-1;
        for(int i=25;i>=0;i--)
        {
            if(vec[i]==1)
            
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


