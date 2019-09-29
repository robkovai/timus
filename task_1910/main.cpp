#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    short n;
    cin >> n;

    vector<int> values;
    int value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        values.push_back(move(value));
    }

    vector<int> results;
    for (size_t i = 1; i < values.size() - 1; i++) {
        value = values[i - 1] + values[i] + values[i + 1];
        results.push_back(value);
    }

    auto iterator = max_element(results.begin(), results.end());
    cout << *iterator << " " << distance(results.begin(), iterator) + 2;
    return 0;
}
