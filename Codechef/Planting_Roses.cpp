// harshitastic
#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long int
#define ld long double
#define invl(v,n) vector<ll> v(n);for(ll i=0;i<n;i++){cin>>v[i];}
#define outvl(v) for(auto i:v) cout<<i<<' '; cout<<endl;
#define rep(a,b,c) for(int i=a;i<=b;i+=c)
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
#define pm cout<<-1<<endl
#define B break
#define C continue
#define ss second
#define ff first
#define _reverse(v) reverse(v.begin(),v.end())
#define _sort(v) sort(v.begin(),v.end())

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Maths
vector<ll> spf;
ll gcd(ll a,ll b){while(b){a%=b;swap(a,b);}return a;}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
vector<pair<ll,ll>> Primefactors(ll n){vector<pair<ll,ll>> a;for(ll d=2;d*d<=n;d++){if(n%d==0){ll c=0;while(n%d==0){c++;n/=d;}a.push_back({d,c});}}if(n>1)a.push_back({n,1});return a;}
vector<pair<ll,ll>> primespf(ll x,vector<ll>&spf){vector<pair<ll,ll>> a;while(x!=1){ll p=spf[x],c=0;while(x%p==0){x/=p;c++;}a.push_back({p,c});}return a;}
vector<ll> factors(ll n){vector<ll>a;for(ll d=1;d*d<=n;d++){if(n%d==0){a.push_back(d);if(n/d!=d)a.push_back(n/d);}}return a;}
vector<ll> getSpf(ll n){vector<ll> s(n+1);for(ll i=0;i<=n;i++)s[i]=i;for(ll i=2;i*i<=n;i++){if(s[i]==i){for(int j=i*i;j<=n;j+=i)if(s[j]==j)s[j]=i;}}return s;}
vector<ll> Primes(ll n){vector<bool> p(n+1,true);p[0]=p[1]=false;vector<ll>a;for(int i=2;i*i<=n;i++){if(p[i]){for(int j=i*i;j<=n;j+=i)p[j]=false;}}for(int i=2;i<=n;i++)if(p[i])a.push_back(i);return a;}
bool isPrime(ll n){if(n<2)return false;for(int i=2;i*i<=n;i++)if(n%i==0)return false;return true;}
ll modExp(ll b,ll e,const ll m){ll r=1;while(e>0){if(e%2==1)r=(r*b)%m;b=(b*b)%m;e/=2;}return r;}
ll invMod(ll p,ll q,const ll m){ll qi=modExp(q,m-2,m);return (p*qi)%m;}
void factorials(ll n,ll m,vector<ll>&f,vector<ll>&inv){f[0]=1;for(int i=1;i<=n;i++)f[i]=(f[i-1]*i)%m;inv[n]=modExp(f[n],m-2,m);for(int i=n-1;i>=0;i--)inv[i]=(inv[i+1]*(i+1))%m;}
ll combination(ll n,ll r,ll m,const vector<ll>&f,const vector<ll>&inv){if(r>n||r<0)return 0;return f[n]*inv[r]%m*inv[n-r]%m;}
ll binaryExponentiation(ll b,ll e,ll m){ll r=1;b%=m;while(e>0){if(e%2==1)r=(r*b)%m;e/=2;b=(b*b)%m;}return r;}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Bit Manipulation
template<typename T> void unset_bit(T &n,int p){n &= ~(T(1)<<p);}
template<typename T> int check_bit(T n,int i){return (n&(T(1)<<i))!=0;}
template<typename T> void unset_bit2(T &n,int i){n &= ~(T(1)<<i);}
template<typename T> void set_bit(T &n,int i){n |= (T(1)<<i);}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Utility
ll ask(ll i){cout<<'?'<<i+1<<endl;ll x;cin>>x;return x;}
bool intersection(pair<ll,ll>&x,pair<ll,ll>&p){if(x.ff>p.ss||p.ff>x.ss)return 0;x.ff=max(p.ff,x.ff);x.ss=min(p.ss,x.ss);return 1;}

vector<int> customDivisor(int x){
    vector<pair<ll,ll>> d=primespf(x,spf);
    vector<int> a={1};
    for(auto &i:d){
        int n=1;
        for(int j=0;j<i.ss;j++){
            n*=i.ff;
            a.push_back(n);
        }
    }
    return a;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Solve function
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    invl(a,n)
    ll f=0,ans=0;
    vector<ll> r;
    for(int i=0;i<n;i++){
        f+=a[i]/k;
        if(a[i]%k) r.push_back(a[i]%k);
    }
    _sort(r);
    _reverse(r);
    ll b=m+1;
    ll t=min(f,b/(k+1));
    ans+=t*k;
    b-=t*(k+1);

    if(t<f && b>1){
        ans+=min(k,b-1);
        b=0;
    }

    if(b>1){
        for(auto i:r){
    
            if(b<=1) B;
            if(b>=i+1){
                ans+=i;
                b-=i+1;
            }
            else{
                ans+=b-1;
                b=0;
                B;
            }
        }
    }

    cout<<ans<<endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
int main(){
    fastio();
    spf=getSpf(2e5+1);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}