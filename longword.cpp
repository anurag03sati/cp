#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a.size() > 10) {
            int len = a.size() - 2;
            cout << a[0] << len << a[a.size() - 1] << endl;  // Corrected index for the last character and added endl
        } else {
            cout << a << endl;  // Added endl for proper formatting
        }
    }
    return 0;
}
