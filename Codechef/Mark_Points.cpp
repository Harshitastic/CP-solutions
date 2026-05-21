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
            int count=0;
            bool possible=true;
            for(int i=0;i<n;i++) {
                if(s[i]=='1'){
                    count++;
                    
                }
                else{
                    if(count<3 && count>0){
                        possible=false;
                        break;
                    }
                    count=0;
                }
            }
            if(possible) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    
    return 0;
}