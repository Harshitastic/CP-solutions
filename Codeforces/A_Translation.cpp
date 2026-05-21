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
    
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int n=s1.length();
    int n1=s2.length();
    bool same=true;
    if(n!=n1) same=false;
    
    else{    for(int i=0;i<n;i++){
            if(s1[i]!=s2[n-1-i]){
                same=false;
                break;

            } 
        } 
    }
    if(same) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}