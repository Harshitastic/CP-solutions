#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i =0;i<n;i++)
            cin>>a[i];

        bool found=false;
        for (int i=0;i<n-1;i++){
            if (a[i]>a[i +1]){ 
                cout <<i +1<<" "<<i+2<< endl; 
                found=true;
                break;
            }
        }
        if(!found) cout<<-1 << endl;
    }
    return 0;
}
