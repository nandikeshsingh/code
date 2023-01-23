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
        multiset<int>ms;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ms.insert(x);
        }
        vector<int>ans;
        int pre=0;
        while(1)
        {
            int ok=0;
            int now=0;
            for(auto& u : ms)
            {
                int temp=pre;
                temp|=u;
                temp^=pre;
                if(temp>ok)
                {
                    ok=temp;
                    now=u;
                }
            }
            if(ok)ans.push_back(now),ms.erase(ms.find(now)),pre|=now;
            else break;
        }
        for(auto& u : ms)ans.push_back(u);
        for(auto& u : ans)cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}


