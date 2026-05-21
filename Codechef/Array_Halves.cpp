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
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(2*n);
        ll j=0,cnt=0;

        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]>n){
                cnt+=n-i+j;
                j++;
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}