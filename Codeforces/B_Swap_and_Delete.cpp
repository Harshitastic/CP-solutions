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
        string s;
        cin>>s;
        int c1=0,c0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') c0++;
            else c1++;

        }
        
        int length=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && c1>0) c1--,length++;
            else if(s[i]=='1' && c0>0) c0--,length++;
            else break;

        }
        cout<<s.length()-length<<endl;
    }
    
    return 0;
}