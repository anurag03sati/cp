#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') cnt++;
        else if(s[i]=='D') cnt--;
    }
    if(cnt>0) cout<<"Anton"<<endl;
    else if(cnt<0) cout<<"Danik"<<endl;
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}