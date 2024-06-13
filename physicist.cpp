#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v1=0,v2=0,v3=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v1+=a;
        v2+=b;
        v3+=c;
    }
    if(v1==0 && v2==0 && v3==0)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}