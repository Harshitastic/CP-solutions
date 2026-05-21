#pragma GCC optimize('O3,unroll-loops')

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <random>
#include <string>
#include <utility>
#include <climits>
#include <iomanip>
#include <numeric>
#include <functional>

using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifdef harshitastic
#define debug(x) cerr << #x << ' '; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef __int128 ell;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// Debug print functions
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << '{'; _print(p.ff); cerr << ','; _print(p.ss); cerr << '}';}
template <class T> void _print(vector <T> v) {cerr << '[ '; for (T i : v) {_print(i); cerr << ' ';} cerr << ']';}
template <class T> void _print(set <T> v) {cerr << '[ '; for (T i : v) {_print(i); cerr << ' ';} cerr << ']';}
template <class T> void _print(multiset <T> v) {cerr << '[ '; for (T i : v) {_print(i); cerr << ' ';} cerr << ']';}
template <class T, class V> void _print(map <T, V> v) {cerr << '[ '; for (auto i : v) {_print(i); cerr << ' ';} cerr << ']';}

// Math & Utility functions
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1) res = (res * a) % mod; a = (a * a) % mod; b >>= 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x;}
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {return ((a % m + b % m) % m + m) % m;}
ll mod_mul(ll a, ll b, ll m) {return ((a % m * b % m) % m + m) % m;}
ll mod_sub(ll a, ll b, ll m) {return ((a % m - b % m) % m + m) % m;}
ll mod_div(ll a, ll b, ll m) {return mod_mul(a, mminvprime(b, m), m);}
ll phin(ll n) {ll num = n; if (n % 2 == 0) {num /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i * i <= n; i += 2) if (n % i == 0) {while (n % i == 0) n /= i; num = num / i * (i - 1);} if (n > 1) num = num / n * (n - 1); return num;}
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 

void solve() {
    // Your solution code here
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(l<=r/2) cout<<-1<<endl;
        else cout<<r<<endl;
    }
}

int main() {
#ifdef harshitastic
    freopen('Error.txt', 'w', stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef harshitastic
    cerr << 'Time: ' << duration.count() / 1000 << ' ms' << endl;
#endif
    return 0;
}
