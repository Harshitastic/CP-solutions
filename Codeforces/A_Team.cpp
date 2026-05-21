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
    int arr[3];
    int prob=0;

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            cin>>arr[j];
            if(arr[j]==1){
                count++;
            }
        }
        if(count>=2) prob++;
        

    }
    cout<<prob<<endl;
    
    return 0;
}