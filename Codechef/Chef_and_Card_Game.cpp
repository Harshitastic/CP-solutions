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

using namespace std;

int sum_digits(int n){
    int total=0;
    while(n>0){
        total=total+ n%10;
        n=n/10;

    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int chef=0,morty=0;
        for(int i=0;i<n;i++){
            int n1,n2;
            cin>>n1>>n2;
            if(sum_digits(n1)>sum_digits(n2)) chef++;
            else if(sum_digits(n1)<sum_digits(n2)) morty++;
            else{
                chef++;
                morty++;
            }


        }
        if(chef>morty) cout<<0<<" "<<chef;
        else if(chef<morty) cout<<1<<" "<<morty;
        else cout<<2<<" "<<chef;
        cout<<endl;
    }

    
    return 0;
}