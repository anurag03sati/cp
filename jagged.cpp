#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    //if first 2 elements cannot be sorted then print NO
    //if first 2 are sorted then yes
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ans.push_back(a);
        }
        bool possible = false;
        
        for (int i = 1; i < n - 1; i++) {
            if (ans[i - 1] < ans[i] && ans[i] > ans[i + 1]) {
                possible = true;
                break;
            }
        }
        if (possible || n <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}