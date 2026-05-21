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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) count++;

        } 
        int left=0;
        int right=n-1;

        while(arr[left]==0) left++;
        while(arr[right]==0) right--;
        bool found=false;
        for(int i=left;i<=right;i++){
            if(arr[i]==0){
                found=true;
                break;

            } 
            
        }
        if(count==n) cout<<0<<endl;
        else if(!found) cout<<1<<endl;
        else cout<<2<<endl;

    }
    
    return 0;
}