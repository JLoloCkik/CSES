#include <algorithm>
#include <iostream>
#include <vector>

int me() {
    long n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "1";
        return 0;
    }
    if (n <= 3) {
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }

    for (long i = 2; i <= n; i += 2) {
        std::cout << i << " ";
    }
    for (long i = 1; i <= n; i += 2) {
        std::cout << i << " ";
    }
    return 0;
}

int pro() {
    int n;
    std::cin >> n;
    if (n == 1) {
        std::cout << "1\n";
        return 0;
    }
    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }
    for (int i = n / 2; i >= 1; i--) { std::cout << i << " " << i + n / 2 << " "; }
    if (n % 2 == 1) std::cout << n << " ";
    std::cout << "\n";
};

int main() {
    me();
    pro();
}

// 5
// 1 3 5 2 4
// 7
// 1 3 5 7 2 4 8
// 6
// 1 3 5 2 4 6
// 4
// 2 4 1 3

// 1 3 2 4
