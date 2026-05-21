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
    
    ll n,k;
    cin>>n>>k;
    ll arr[n];
     ll count=0;
    for(int i=0;i<n;i++){
          cin>>arr[i];
          if(arr[i]>0 && i<k) count++;
    }
   
    ll key=arr[k-1];
    for(int i=k;i<n;i++){
        if(arr[i]==key && arr[i]>0) count++;
        


    }
    cout<<count<<endl;
    
    
    return 0;
}