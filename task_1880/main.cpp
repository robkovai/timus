#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void inputValues(vector<unsigned int> &values) {
    short n;
    unsigned int value;
    cin >> n;
    for (short i = 0; i < n; i++) {
        cin >> value;
        values.push_back(move(value));
    }
}

int main() {
    vector<unsigned int> a, b, c;

    inputValues(a);
    inputValues(b);
    inputValues(c);

    short count = 0;
    for (auto value : a) {
        if (binary_search(b.begin(), b.end(), value))
            if (binary_search(c.begin(), c.end(), value))
                count++;
    }

    cout << count;

    return 0;
}
