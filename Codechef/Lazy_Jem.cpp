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
        long long n,b,m,total=0;
        cin>>n>>b>>m;
        while(n>0){
            long long operations = (n+1)/2;
            total=total + (operations*m)+b;
            n=n-operations;
            m=2*m;
        }
        cout<<total-b<<endl;

    }
    
    return 0;
}