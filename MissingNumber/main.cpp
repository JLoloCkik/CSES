#include <algorithm>
#include <iostream>
#include <vector>

int me() {
    long n;

    std::cin >> n;

    std::vector<long> vec;
    vec.reserve(n - 1);

    long temp;
    for (long i = 0; i < n-1; ++i) {
        if (std::cin >> temp) {
            vec.push_back(temp);
        }
    }

    sort(vec.begin(), vec.end());

    for (long i = 0; i < n; ++i) {
        if (vec[i] != i+1) {
            std::cout << i+1 << " ";
            return 0;
        }
    }
    return 0;
};

void first() {
    int n;
    std::cin >> n;

    std::vector<bool> seen(n+1);
    for (int i = 0; i <= n-1; ++i) {
        int x;
        std::cin >> x;
        seen[x] = true;
    }
    for (int i = 0; i <= n; ++i) {
        if (!seen[i]) {
            std::cout << i << std::endl;
        }
    }
};

void second() {
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += i;
    }

    for (int i = 0; i <= n; ++i) {
        int x;
        std::cin >> x;
        sum -= x;
    }
    std::cout << sum << std::endl;
};

int main() {
    me();
    first();
    second();
}
// Input:
// 5
// 2 3 1 5
// Output:
// 4