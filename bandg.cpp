#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mpp;
    for(char c:s){
        mpp[c]++;
    }
    int cnt=0;
    for(auto x:mpp) cnt++;
    if(cnt%2==0) cout<<"CHAT WITH HER!";
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}