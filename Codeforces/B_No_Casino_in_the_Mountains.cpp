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
        int n,k;
        cin>>n>>k;
        int arr[n];
        int peak=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        int i=0,count=0;
        while(i<=n-k){
            bool hike=true;
            for(int j=0;j<k;j++){
                if(arr[i+j]!=0){
                    hike=false;
                    break;
                }
            }
            if(hike){
                count++;
                i+=k+1;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}