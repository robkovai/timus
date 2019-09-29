#include <iostream>
#include <vector>

using namespace std;

inline bool ends_with(std::string const &value, std::string const &ending) {
    if (ending.size() > value.size()) return false;
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

int main() {
    short n;
    string name;

    cin >> n;
    short count = n + 2;
    getline(cin, name);

    for (short i = 0; i < n; i++) {
        getline(cin, name);
        if (ends_with(name, "+one"))
            count++;
    }
    if (count == 13) count++;

    cout << count * 100;

    return 0;
}
