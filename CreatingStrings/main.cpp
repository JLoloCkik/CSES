#include <algorithm>
#include <iostream>
#include <vector>

void perm(const std::vector<char> v, std::string words, int size, std::vector<bool> &used,
          std::vector<std::string> &result) {
    if (words.length() == size) {
        result.push_back(words);
        return;
    }
    for (int i = 0; i < size; i++) {
        if (i >0 && v[i] == v[i - 1]&& !used[i-1]) {
            continue;
        }
        if (!used[i]) {
            used[i] = true;
            perm(v, words + v[i], size, used, result);
            used[i] = false;
        }
    }
};

int main() {
    std::string n;
    std::cin >> n;
    const int size = n.size();
    std::vector<char> v;
    v.assign(n.begin(), n.end());
    sort(v.begin(), v.end());
    std::vector<bool> used(size);
    std::vector<std::string> result;
    perm(v, "", size, used, result);
    sort(result.begin(), result.end());
    std::cout << result.size() << std::endl;
    for (auto n1: result) {
        std::cout << n1 << std::endl;
    }
}
