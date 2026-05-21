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
        string s;
        cin>>s;
        bool possible=false;
        map<char,int> freq;
        
        for(int i=1;i<n;i++){
            freq[s[i]]++;
            if(freq[s[i]]>1){
                possible=true;
                break;
            }
        }
        
        if(!possible){
            freq.clear();
            for(int i=0;i<n-1;i++){
                freq[s[i]]++;
                if(freq[s[i]]>1){
                    possible=true;
                    break;
                }
            }
        }

        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
