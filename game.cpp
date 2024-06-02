#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    //if rem is 1 then vanya decrements and wins
    //if rem is 2 then vanya increments and wins
    //if rem is 0 then vanya has to make a move first thus say +1 then vova can nullify thus back to 0 goes on... and vova wins
    while(t--){
        int n;
        cin>>n;
        if(n%3==1 || n%3 ==2) cout<<"First"<<endl;
        if(n%3==0)cout<<"Second"<<endl;

    }
    return 0;
}