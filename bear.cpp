#include<iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    int cnt=0;
    while(l<=b){
        l=3*l;
        b=2*b;
        cnt++;
    }
    cout<<cnt;
    // string s;
    // cin>>s;
    // int cnt=0;
    // int ans=0;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='E')cnt++;
    //     if(s[i]=='L')cnt--;
    //     if(cnt>ans){
    //         ans=cnt;
    //     }
    // }
    // cout<<ans;
    return 0;
}