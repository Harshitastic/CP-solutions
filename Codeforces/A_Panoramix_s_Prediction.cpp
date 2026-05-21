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

bool prime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return true;
    }
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    int flag=0;
    int i;
    for( i=n+1;i<=m;i++){
        if(prime(i)){
            
            flag=1;
            break;
        }
    }
    if(flag==1 & i==m) cout<<"YES";
    else cout<<"NO";

    
    return 0;
}