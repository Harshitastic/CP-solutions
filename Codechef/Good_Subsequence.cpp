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
        int n;
        cin>>n;
        vector<int> a(n);
        
        for(auto &it:a) cin>>it;

        int ans=1, parity=a[0]%2;

        for(int i=1;i<n;i++){
            if(a[i]%2!=parity){
                ans++;
                parity=a[i]%2;
            }
        }
        cout<<ans<<endl;


    }
    
    return 0;
}