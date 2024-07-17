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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(a) a.begin(), a.end()
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define for1(i, a, b, c) for (int i = a; i < b; i+=c)
#define BITS 32
#define binary(n) bitset<BITS>(n).to_string()
#define setbits(n) bitset<BITS>(n).count()

template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//----------------------------------------------------------------------------------------------------------

vector<int> lowprime(int N);                          // returns lowest prime of all natural numbers upto N
vector<int> primefactors(int N, vector<int> &v);      //prime factors of any number
int binexpo(int base , int power);                    //returns (base)^power

//----------------------------------------------------------------------------------------------------------

const int M=1e9 +7;
vector<int> lp=lowprime( 1 + (int)1e5 );

void solve()
{
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a)cin>>x;
}

//----------------------------------------------------------------------------------------------------------

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    for1(i,0, t, 1)
    {
        // cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------


int binexpo(int base , int power)
{
    int res=1;
    while(power)
    {
        if(power&1)
        {
            power--;
            res*=base%M;
            res%=M;
        }
        else
        {
            power/=2;
            base*=base%M;
            base%=M;
        }
    }
    return res;
}


vector<int> lowprime(int N)
{
    vector<int> lp(N+1,0) ,prime(N+1,0);

    for1(i,2,N, 1)
    {
        if(!prime[i])
        {
            lp[i]=i;
            for1(j,2,N/i +1, 1)
            {
                prime[i*j]=1;
                if(!lp[j*i])
                    lp[i*j]=i;
            }
        }
    }
    return lp;
}

vector<int> primefactors(int N, vector<int> &v)
{
    vector<int> prime;
    int x;
    while(N>1)
    {
        x=lp[N];
        prime.pb(x);
        while(N%x==0)
        {
            N=N/x;
        }
    }
    return prime;
}