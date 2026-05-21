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
    int key=0,cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0){
            key=x;
        }
        else{
            if(x!=key){
                cnt++;
                key=x;
            }
        }
    }
    cout<<cnt+1;
    
    return 0;
}