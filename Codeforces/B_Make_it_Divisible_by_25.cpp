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
int min_operations(string n, string value){
        int op=0;
        int index=1;
        for(int i=n.size()-1;i>=0;i--){
            if(n[i]==value[index]){
                index--;
                if(index<0) break;
            }
            else{
                op++;
            }   
            
        }
        if(index>=0) op=INT_MAX;
        return op;

    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string arr[4]={"00","25","50","75"};
        int ans=INT_MAX;
        for(int i=0;i<4;i++){
            ans=min(ans,min_operations(n,arr[i]));
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}