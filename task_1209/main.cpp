#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

const double epsilon = .000001;

bool compare(const long double &a, const long double &b) {
    return double(fabsl(a - b)) < epsilon;
}

int main() {
    int n;
    cin >> n;

    vector<long long> values;
    long long currentValue;

    for (int i = 0; i < n; i++) {
        cin >> currentValue;
        values.push_back(move(currentValue));
    }

    for (auto value : values) {
        auto result = sqrtl(8 * value - 7) - 1 / 2;
        cout << (compare(floorl(result), result) ? "1 " : "0 ");
    }

    return 0;
}
