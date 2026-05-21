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
    
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    ll length=1,maxx=1;
    for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            length++;
        }
        else{
            length=1;

        }
        maxx=max(maxx,length);
        
    }
    cout<<maxx<<endl;
    
    return 0;
}