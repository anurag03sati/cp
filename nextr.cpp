#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k,dig;
    cin>>n >>k;
    int cnt=0;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>dig;
        nums.push_back(dig);
    }
    int el=nums[k-1];
    for(int i=0;i<n;i++){
        if(nums[i]>=el && nums[i]>0)cnt++;
    }
    cout<<cnt;
    return 0;
}