#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))u++;
        if(islower(s[i]))l++;
    }
    for(int i=0;i<s.size();i++){
        if(u>l){
            s[i]=toupper(s[i]);
        }
        else if(u<l) s[i]=tolower(s[i]);
        else s[i]=tolower(s[i]);
    }
    cout<<s;
    return 0;
}