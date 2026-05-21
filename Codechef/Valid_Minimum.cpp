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
        int a[3];
        for(int i=0;i<3;i++) cin>>a[i];
        sort(a,a+3);
        if(count(a,a+3,a[0])>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
    return 0;
}