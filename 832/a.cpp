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
        vector<int>a(n);
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)x+=a[i];
            else y+=a[i];
        }
        cout<<abs(abs(x)-abs(y))<<endl;
    }
    return 0;
}


