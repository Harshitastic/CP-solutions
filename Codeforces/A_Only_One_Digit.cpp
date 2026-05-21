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
        int x;
        cin>>x;
        int min_n=10;
        while(x>0){
            int n=x%10;
            x=x/10;
            
            min_n=min(n,min_n);
            
        }
        cout<<min_n<<endl;
    }
    
    return 0;
}