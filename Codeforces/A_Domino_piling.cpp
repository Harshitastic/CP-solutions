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
    ///int m=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A' + i)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}