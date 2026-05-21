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
        int m=n%8;
        if(m!=0){
            if(m==1) cout<<n+3<<"LB"<<endl;
            if(m==2) cout<<n+3<<"MB"<<endl;
            if(m==3) cout<<n+3<<"UB"<<endl;
            if(m==4) cout<<n-3<<"LB"<<endl;
            if(m==5) cout<<n-3<<"MB"<<endl;
            if(m==6) cout<<n-3<<"UB"<<endl;
            if(m==7) cout<<n+1<<"SU"<<endl;
        }
        else{
            cout<<n-1<<"SL"<<endl;
        }

    }
    
    return 0;
}