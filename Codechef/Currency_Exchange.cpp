#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;

        while((a1-b1)!=(a2-b2)){
            if(a1-b1 > a2-b2){
                if(b1>=5){
                    a1++;
                    b1-=5;
                } else if(a1>0 && b1>0){
                    a1--;
                    b1--;
                } else {
                    break;
                }
            } else {
                if(a1>0){
                    a1--;
                    b1+=5;
                } else if(a1>0 && b1>0){
                    a1--;
                    b1--;
                } else {
                    break;
                }
            }
        }

        if((a1-b1)==(a2-b2)){
            long long diffA = a1 - a2;
            long long diffB = b1 - b2;
            if(diffA>=0 && diffB>=0 && diffA==diffB) cout<<"YES\n";
            else cout<<"NO\n";
        } else cout<<"NO\n";
    }
    return 0;
}
