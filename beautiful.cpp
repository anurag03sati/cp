#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int r,c;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            int n;
            cin>>n;
            if(n==1){
                r=i;
                c=j;
            }
        }
    }
    int res=abs(3-r)+abs(3-c);
    cout<<res;
}