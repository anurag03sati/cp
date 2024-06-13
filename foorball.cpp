#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
            if (cnt == 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            cnt = 1; // Reset the counter only if we encounter a different player
        }
    }
    cout<<"NO"<<endl;
    return 0;
}