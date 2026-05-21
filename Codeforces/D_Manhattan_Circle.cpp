// harshitastic
#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long int
#define ld long double
#define invl(v,n) vector<ll> v(n);for(ll i=0;i<n;i++){cin>>v[i];}
#define outvl(v)for(auto i:v)cout<<i<<' '; cout<<endl;
#define rep(a,b,c)for(int i=a;i<=b;i+=c)
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
#define pm cout<<'-1'<<endl
#define B break
#define C continue
#define ss second
#define ff first
#define _reverse(v)reverse(v.begin(),v.end())
#define _sort(v)sort(v.begin() , v.end())

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Maths
vector<ll> spf;
ll gcd(ll a, ll b) {while(b){a%=b; swap(a,b);} return a;}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}
vector<pair<ll,ll>> Primefactors(ll n){vector<pair<ll,ll>> arr;for(ll d=2;d*d<=n;d++){if(n%d==0){ll c=0;while(n%d==0){c++;n/=d;}arr.push_back({d,c});}}if(n>1) arr.push_back({n,1}); return arr;}
vector<pair<ll,ll>> primespf(ll x, vector<ll>&spf){vector<pair<ll,ll>>ans;while(x!=1){ll prime=spf[x],c=0;while(x%prime==0){x/=prime;c++;}ans.push_back({prime,c});} return ans;}
vector<ll> factors(ll n){vector<ll>arr;for(ll d=1;d*d<=n;d++){if(n%d==0){arr.push_back(d); if(n/d!=d) arr.push_back(n/d);}} return arr;}
vector<ll> getSpf(ll n){vector<ll> spf(n+1);for(ll i=0;i<=n;i++)spf[i]=i;for(ll i=2;i*i<=n;i++){if(spf[i]==i){for(int j=i*i;j<=n;j+=i) if(spf[j]==j) spf[j]=i;}} return spf;}
vector<ll> Primes(ll n){vector<bool> is_prime(n+1,true);is_prime[0]=is_prime[1]=false;vector<ll>ans;for(int i=2;i*i<=n;i++){if(is_prime[i]){for(int j=i*i;j<=n;j+=i)is_prime[j]=false;}}for(int i=2;i<=n;i++)if(is_prime[i])ans.push_back(i); return ans;}
bool isPrime(ll n){if(n<2)return false; for(int i=2;i*i<=n;i++) if(n%i==0)return false; return true;}
ll modExp(ll base,ll exp,const ll mod){ll res=1;while(exp>0){if(exp%2==1) res=(res*base)%mod; base=(base*base)%mod; exp/=2;} return res;}
ll invMod(ll P,ll Q,const ll MOD){ll Q_inv=modExp(Q,MOD-2,MOD); return (P*Q_inv)%MOD;}
void factorials(ll n,ll mod,vector<ll>&fact,vector<ll>&inv){fact[0]=1;for(int i=1;i<=n;i++)fact[i]=(fact[i-1]*i)%mod;inv[n]=modExp(fact[n],mod-2,mod);for(int i=n-1;i>=0;i--) inv[i]=(inv[i+1]*(i+1))%mod;}
ll combination(ll n,ll r,ll mod,const vector<ll>&fact,const vector<ll>&inv){if(r>n||r<0)return 0; return fact[n]*inv[r]%mod*inv[n-r]%mod;}
ll binaryExponentiation(ll base,ll exp,ll mod){ll res=1;base%=mod; while(exp>0){if(exp%2==1) res=(res*base)%mod; exp/=2; base=(base*base)%mod;} return res;}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Bit Manipulation
template<typename T> void unset_bit(T &n,int pos){n &= ~(T(1)<<pos);}
template<typename T> int check_bit(T num,int i){return (num & (T(1)<<i))!=0;}
template<typename T> void set_bit(T &num,int i){num|= (T(1)<<i);}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Utility
ll ask(ll i){cout<<'?'<<i+1<<endl; ll x; cin>>x; return x;}
bool intersection(pair<ll,ll>&x,pair<ll,ll>&p){if(x.first>p.second||p.first>x.second)return 0; x.first=max(p.first,x.first); x.second=min(p.second,x.second); return true;}

vector<int> customDivisor(int x){
    vector<pair<ll,ll>> d = primespf(x, spf);
    vector<int> ans = {1};
    for(auto &pr : d){
        int num=1;
        for(int i=0;i<pr.second;i++){num*=pr.first; ans.push_back(num);}
    }
    return ans;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
// Solve function
void solve(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n>> m;

        int minr = n+1, maxr = 0, minc = m+1, maxc = 0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char c;
                cin >> c;
                if(c == '#'){
                    minr = min(minr,i);
                    maxr = max(maxr, i);
                    minc = min(minc,j);
                    maxc = max(maxc,j);
                }
            }
        }

        cout << (minr + maxr)/2 << " " << (minc + maxc)/2 << "\n";
    }
}

/*--------------------------------------------------------------------------------------------------------------------------------*/
int main(){
    fastio();
    spf = getSpf(2e5+1);
    solve();
    return 0;
}

