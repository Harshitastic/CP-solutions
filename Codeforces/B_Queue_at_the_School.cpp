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
    
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=0;i<=n-2;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                 swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    
    return 0;
}