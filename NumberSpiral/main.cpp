#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void spiral(long long y, long long x) {
    long long result;

    if (y > x) {
        if (y % 2 == 0) {

            result = y * y - x + 1;
        } else {

            result = (y - 1) * (y - 1) + x;
        }
    } else {
        if (x % 2 != 0) {

            result = x * x - y + 1;
        } else {

            result = (x - 1) * (x - 1) + y;
        }
    }

    cout << result << endl;
}

int main() {
    long long x, y;
    long n;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        cin >> y >> x;
        spiral(y, x);
    }

    return 0;
}