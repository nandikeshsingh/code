#include<bits/stdc++.h>
#define int long long
#define speed  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(v) v.begin(),v.end()
using namespace std;
vector<int>freq;
bool cmp(int a,int b)
{
    return freq[a]>freq[b];
}
signed main()
{
    speed;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(n*a!=m*b)
        {
            cout<<"NO"<<endl;
            continue;
        }
        freq.resize(m);
        for(int i=0;i<m;i++)freq[i]=b;
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            vector<int>idx(m);
            for(int i=0;i<m;i++)idx[i]=i;
            sort(all(idx),cmp);
            for(int j=0;j<a;j++)
            {
                ans[i][idx[j]]=1;
                freq[idx[j]]--;
            }
            for(int j=a;j<m;j++)
            ans[i][idx[j]]=0;
        }
        cout<<"YES"<<endl;
        for(auto& u : ans)
        {
            for(auto& v : u)
            cout<<v;
            cout<<endl;
        }

    }
    return 0;
}
