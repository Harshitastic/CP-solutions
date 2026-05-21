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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c1=0,c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') c1++;
            else c0++;

            
        }

        if(c1==c0) cout<<n<<endl;
        else if(c1>c0){
            cout<<2*c0 + 1<<endl;
        }
        else cout<<2*c1 +1<<endl;

        
    }
    
    
    return 0;
}