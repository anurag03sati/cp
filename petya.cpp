#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    int sum=0;
    int n=b.size();
    for(int i=0;i<n;i++){
        char lower_a = tolower(a[i]);
        char lower_b = tolower(b[i]);
        if (lower_a < lower_b) {
            cout << -1 << endl;
            return 0;
        } else if (lower_a > lower_b) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
    
}