#include <iostream>
#include <vector>

void me() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    long sum = 0;
    long num = 0;
    for (int i = 0; i < n-1; i++) {
        num = v[i] - v[i + 1];
        if (num > 0) {
            v[i+1] += num;
            sum += num;
        }
    }
    std::cout << sum << std::endl;

};
using ll = long long;
void fcode() {
    int n;
    std::cin >> n;
    std::vector<int> v(n+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> v[i];
    }
    ll res = 0;
    for (int i = 2; i <= n; i++) {
        if (v[i] < v[i-1]) {
            res += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    std::cout << res << std::endl;
};

int main() {
    // me();
    fcode();
}
// 410065399

// 10
// 1000000000 1 1 1 1 1 1 1 1 1

// 8999999991
