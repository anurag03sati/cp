#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    //minimum fuel required is max distance between two points
    //also max dist is 2x last gas station-destination
    for(int i=0;i<t;i++){
        int ans=0;
        int n,x;
        cin>>n>>x;
        int prev=0;
        for(int j=0;j<n;j++){
            int el;
            cin>>el;
            ans=max(ans,(el-prev));
            prev=el;
        }
        ans=max(ans,2*(x-prev));
        cout<<ans<<endl;
    }
    return 0;
}