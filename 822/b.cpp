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
        for(int i=1;i<=n;i++)
        {
            if(i==1)cout<<1<<endl;
            else if(i==1)cout<<1<<" "<<1<<endl;
            else 
            {
                cout<<1<<" ";
                int rim=i-2;
                while(rim--)cout<<0<<" ";
                cout<<1<<endl;
            }
        }
    }
    return 0;
}


