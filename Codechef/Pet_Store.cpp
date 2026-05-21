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
        int n;
        cin>>n;
        int arr[n];
        bool possible=true;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            int key=arr[i];
            int count=0;
            for(int j=0;j<n;j++){
                if(key==arr[j]) count++;
            }
            if(count%2!=0){
                possible=false;
                break;

            }
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    

    }
    
    return 0;
}