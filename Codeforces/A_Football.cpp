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
    
    string s;
    cin>>s;
    char key=s[0];
    int count=1;
    bool dang=false;
    for(int i=1;i<s.length();i++){
        if(s[i]==key){
            count++;
        }
        else{
            key=s[i];
            count=1;
        }
        if(count==7){
            dang=true;
            break;
        }
        
    }
    if(dang) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}