#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool caps = true;
 
    // Check if all characters except possibly the first are uppercase
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            caps = false;
            break;
        }
    }
 
    if (caps) {
        // Toggle case
        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
 
    cout << s;
    return 0;
}