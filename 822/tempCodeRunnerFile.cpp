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
        int n,k;
        cin>>n>>k;
        vector<int>a(n+2);
        for(int i=1;i<=n;i++)cin>>a[i];
        int lsum=a[k],rsum=a[k];
        int l=k-1,r=k+1;
        while(1)
        {
            if(l==0 || r==n+1)
            {
                cout<<"YES"<<endl;
                break;
            }
            bool any=0;
            while( r<=n && lsum+rsum+a[r]-a[k]>=0)
            rsum+=a[r++],any=1;
            while(l>0 && lsum+rsum+a[l]-a[k]>=0)
            lsum+=a[l--],any=1;
            if(!any)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}


