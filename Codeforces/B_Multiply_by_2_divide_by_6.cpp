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
        ll n ;
        cin>>n;

        ll c2=0,c3=0;

        while(n>0 && n%3==0){
            c3++;
            n/=3;

        }
        while(n>0 && n%2==0){
            c2++;
            n/=2;

        }
        if(n>1 || c2>c3) cout<<-1<<endl;
        else cout<<(c3-c2)+c3<<endl;
    }
    
    return 0;
}