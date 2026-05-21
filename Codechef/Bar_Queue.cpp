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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int b=0,g=0,ans=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='G') g++;
            else b++;
            ans++;
            
            if(b>2*g) break;

        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}