/*mujhe kya mai toh dcoder hu*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long int
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl cout << "\n"

#define vi vector<int>
#define vpii vector <pair<int,int>>
#define mii map <int , int>
#define mci map<char , int>
#define umap unordered_map
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(),v.end()

#define scan(a) for (auto &xx : a) cin >> xx;
#define print(a) for (auto &xx : a) cout << xx << ' ';
#define for1(i, b) for (int i = 0; i < b; i++)
#define for2(i, a, b) for (int i = a; i < b; i++)
#define for3(i, a, b, c) for (int i = a; i < b; i+=c)
#define rof1(i, b) for (int i = b-1; i >= 0; i--)
#define rof2(i, a, b) for (int i = b-1; i >= a; i--)
#define rof3(i, a, b, c) for (int i = b-1; i >= a; i-=c)

#define BITS 32
#define binary(n) bitset<BITS>(n).to_string()
#define setbits(n) bitset<BITS>(n).count()

// vi binary(int n);
vi lowprime(int N);                 // returns lowest prime of all natural numbers upto N
vi primefactors(int N, vi &v);      //prime factors of any number
int binexpo(int base , int power);  //returns (base)^power
int modmul(int a, int b, int M);    //returns (a*b)%M
int modadd(int a, int b, int M);    //returns (a+b)%M
int modsub(int a, int b, int M);    //returns (a-b)%M
int modinv(int a, int M);           //returns (a^-1)%M
int moddiv(int a, int b, int M);    //returns (a/b)%M

// policy based data structure--------------------------------------------
template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.lower_bound(key), s.upper_bound(key), s.erase(key), s.insert(key)
// s.order_of_key(key), *s.find_by_order(index)
// -----------------------------------------------------------------------

const int M=1e9 +7;
vi lp=lowprime( 1 + (int)1e5 );

/*----------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n;cin >> n;
    vi a(n);scan(a);
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    for1(i,t)
    {
        // cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}

/*----------------------------------------------------------------------------------------------------------------------*/


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


vi lowprime(int N)
{
    vi lp(N+1,0) ,prime(N+1,0);

    for2(i,2,N)
    {
        if(!prime[i])
        {
            lp[i]=i;
            for2(j,2,N/i +1)
            {
                prime[i*j]=1;
                if(!lp[j*i])
                    lp[i*j]=i;
            }
        }
    }
    return lp;
}

vi primefactors(int N, vi &v)
{
    vi prime;
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

int modmul(int a, int b, int M)
{
    return ((a%M)*(b%M))%M;
}

int modadd(int a, int b, int M)
{
    return ((a%M)+(b%M))%M;
}

int modsub(int a, int b, int M)
{
    return ((a%M)-(b%M)+M)%M;
}
int modinv(int a, int M)
{
    return binexpo(a,M-2);
}
int moddiv(int a, int b, int M)
{
    return ((a%M)*(modinv(b,M)%M))%M;
}
// vi binary(int n)
// {
//     string a;
//     while (n)
//     {
//         a.pb(n % 2 + '0');
//         n = n / 2;
//     }

//     reverse(all(a));
//     return a;
// }




// floor(log10(n) + 1);           // length of any integer
