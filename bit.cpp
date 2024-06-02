#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a[0]=='+' || a[1]=='+')ans++;
        if(a[0]=='-' || a[1]=='-')ans--;
    }
    cout<<ans;
    return 0;
}