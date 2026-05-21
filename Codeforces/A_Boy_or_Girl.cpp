#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    if(freq.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
