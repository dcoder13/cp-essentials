/*--------------DCODER13--------------*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#ifdef ON_PC
    #include <debug.h>
#else
    #define debug(x...)
#endif

#define int long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(),v.end()
#define BITS 32
#define binary(n) bitset<BITS>(n).to_string()
#define setbits(n) bitset<BITS>(n).count()

template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//----------------------------------------------------------------------------------------------------------

const int M=1e9 +7;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x : a)cin>>x;
    
}

//----------------------------------------------------------------------------------------------------------

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--){
        // cout<<"Case #"<<i+1<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}