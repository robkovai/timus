#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned short a, b, c;
    cin >> a >> b >> c;

    vector<vector<int>> values;
    values.push_back({a, b, c});
    values.push_back({a, c, b});
    values.push_back({b, a, c});
    values.push_back({b, c, a});
    values.push_back({c, a, b});
    values.push_back({c, b, a});

    vector<int> results;
    for (auto value : values) {
        results.push_back(value[0] + value[1] + value[2]);
        results.push_back(value[0] + value[1] - value[2]);
        results.push_back(value[0] + value[1] * value[2]);
        results.push_back(value[0] - value[1] + value[2]);
        results.push_back(value[0] - value[1] - value[2]);
        results.push_back(value[0] - value[1] * value[2]);
        results.push_back(value[0] * value[1] + value[2]);
        results.push_back(value[0] * value[1] - value[2]);
        results.push_back(value[0] * value[1] * value[2]);
    }

    cout << *min_element(results.begin(), results.end());

    return 0;
}
