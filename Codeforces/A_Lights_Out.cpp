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
    
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=a[i][j];
            if(i>0) sum+=a[i-1][j];
            if(i<2) sum+=a[i+1][j];
            if(j>0) sum+=a[i][j-1];
            if(j<2) sum+=a[i][j+1];
            if(sum%2==0){
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }

    prime

    
    return 0;
}