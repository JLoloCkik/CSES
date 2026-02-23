#include <iostream>
// Input:
//
// ATTCGGGA
// Output:
//
// 3
void me() {
    std::string string;
    std::cin >> string;

    char ch = string[0];
    int maxLength = 0;
    int length = 1;
    for (int i = 1; i < string.length(); i++) {
        if (string[i] == ch) {
            length++;
        }
        else if (maxLength < length) {
            maxLength = length;
            ch = string[i];
            length = 1;
        }
        else {
            ch = string[i];
            length = 1;
        }
    }
    if (maxLength < length) {
        maxLength = length;
    }
    std::cout << maxLength << std::endl;
};


void fcode() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    int cur = 1;
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i]) cur = 0;
        cur++;
        res = std::max(res, cur);
    }
    std::cout << res << "\n";
};

int main() {
    me();
    fcode();
}

