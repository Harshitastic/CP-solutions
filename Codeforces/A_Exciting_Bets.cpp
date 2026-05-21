#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        

        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            ll gcd=abs(a-b);
            ll m=min(a,b);
            ll moves=min(m%gcd,gcd-(m%gcd));
            cout<<gcd<<" "<<moves<<endl;
        }
    }
    
    return 0;
}