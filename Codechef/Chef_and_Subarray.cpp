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
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=0,store=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            
            store=max(store,count);
            count=0;
        }
        else{
            count++;
        }
    }
    store=max(store,count);
    cout<<store<<endl;
    
    
    return 0;
}