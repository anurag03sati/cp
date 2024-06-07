#include <iostream>
#include <cctype>
#include <string> 
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()==0)cout<<' ';
    
    char ch=toupper(s[0]);
    s.erase(0, 1);
    s.insert(0,1, ch);
    cout<<s;
    return 0;
}