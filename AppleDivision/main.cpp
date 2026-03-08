#include <algorithm>
#include <iostream>
#include <vector>
typedef long long ll;
ll solve(const std::pmr::vector<ll> &vec, ll n, ll index, ll aWg, ll bWg) {
    if (index == n) {
        return llabs(aWg - bWg);
    }
    ll choiceA = solve(vec, n, index + 1, aWg + vec[index], bWg);
    ll choiceB = solve(vec, n, index + 1, aWg, bWg + vec[index]);
    return std::min(choiceA, choiceB);
};

int main() {
    ll n;
    std::cin >> n;
    std::pmr::vector<ll> vec(n);
    for (long i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    ll res = solve(vec, n, 0, 0, 0);
    std::cout << res << std::endl;
}
