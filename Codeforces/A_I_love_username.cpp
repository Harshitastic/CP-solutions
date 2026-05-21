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
    cin >>n ;

    int best,worst=0,points=0;
    cin>>best;
    worst=best;


    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        if(x>best){
            best=x;
            points++;
        }
        else if(x<worst){
            worst=x;
            points++;
        }
        
    }
    cout<<points;
    
    return 0;
}