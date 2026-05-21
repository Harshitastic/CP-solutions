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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if( x<=n) cout<<x<<endl;
        else{
            while(x>n){
                x=x-(n+1);
            }
            cout<<x<<endl;
        }
    }
    
    return 0;
}