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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=0;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                count++;
                arr[i]/=2;
                if(arr[i]==0) break;
            }
            if(arr[i]==0 && arr[i+1]==0){
                count=-1;
                break;

            } 
        }
        cout<<count<<endl;
    }
    
    return 0;
}