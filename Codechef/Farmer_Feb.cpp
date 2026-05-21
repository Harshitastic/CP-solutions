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

bool prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        for(int i=1;;i++){
            int sum=x+y+i;
            if(prime(sum)){
                cout<<i<<endl;
                break;

            }
        }
    }
    
    
    return 0;
}