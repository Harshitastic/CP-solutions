#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<int,int> mpp;
    int max_freq=0;

    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        mpp[x]++;
        max_freq=max(mpp[x],max_freq);
    }

    if(mpp.size()==2 && max_freq==2){
        cout<<2;
    } else {
        cout<<max_freq-1;
    }

    return 0;
}
