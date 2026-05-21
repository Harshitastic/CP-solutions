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
            int n1;
            cin>>n1;
            string s1;
            cin>>s1;
            int n2;
            cin>>n2;
            string s2;
            cin>>s2;
            string order;
            cin>>order;

            for(int i=0;i<n2;i++){
                if(order[i]=='D'){
                    
                    s1.push_back(s2[i]);
                }
                else{
                    char d=s2[i];
                    s1.insert(s1.begin(),s2[i]);
                }
            }
            cout<<s1<<endl;
    }
    
    return 0;
}