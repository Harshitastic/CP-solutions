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
        sort(arr,arr+n);
        bool possible=true;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>i+1){
                possible=false;
                break;
            }
            else{
                
                while(arr[i]!=i+1){
                    arr[i]++;
                    count++;

                }
            }
        }
        if(possible ) cout<<count<<endl;
        else cout<<-1<<endl;
    
    
    } 
    return 0;
}  