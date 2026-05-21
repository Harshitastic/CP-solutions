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
            int y=n/3;
            while(y>=0){
                int rem=n-3*y;
                if(rem%2==0){
                    int x=rem/2;
                    cout<<x*4 + y*5<<endl;
                    break;
                }
                y--;
            } 
    }
    
    return 0;
}