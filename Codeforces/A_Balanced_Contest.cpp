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
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int hard=0,easy=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=p/2) easy++;
            else if(arr[i]<=p/10) hard++;
        }
        if(hard==2 && easy==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}