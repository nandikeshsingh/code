#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
#define speed  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>
signed main()
{
    speed;
    ordered_set st;
    int n,k;
    cin>>n>>k;
    vector<int>x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(i<k)st.insert({x[i],i});
    }
    return 0;
}
