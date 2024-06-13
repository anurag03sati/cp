#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int j=t.size()-1;
    for(int i=0;i<s.size();i++){
        if(t[j]!=s[i]){
            cout<<"NO"<<endl;
            return 0;
        }
        j--;
    }
    cout<<"YES"<<endl;
    return 0;
}