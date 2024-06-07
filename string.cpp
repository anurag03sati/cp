#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        // Convert uppercase letters to lowercase
        s[i] = tolower(s[i]);
        
        // Delete vowels
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            s.erase(s.begin() + i);
            i--; // Adjusting index after erasing a character
        }
        else {
            // Insert '.' before consonants
            s.insert(i, ".");
            i++; // Move to the next character after inserting '.'
        }
    }

    cout << s;
    return 0;
}
