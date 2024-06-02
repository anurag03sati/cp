#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    //if k is 1 then f arr is sorted then yes else no
    //in all other cases where k>=2 its always true
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>ans;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            ans.push_back(a);
        }
        if(k==1){
            if(is_sorted(ans.begin(),ans.end())) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
   
}