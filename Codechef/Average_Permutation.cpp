#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n%2!=0){
            while(n!=1){
                cout<<n<<" ";
                n-=2;

            }
            for(int i=2;i<=n-1;i=i+2) cout<<i<<" ";
            cout<<endl;
            
        }
        else{
            while(n!=2){
                cout<<n<<endl;
                n-=2;

            }
            for(int i=1;i<=n-1;i=i+2) cout<<i<<" ";
            cout<<endl;
        }

    }
    
    return 0;
}
