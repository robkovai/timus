#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> closet1 {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"};
const vector<string> closet2 {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"};
const vector<string> closet3 {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};

bool contains(const vector<string> &values, string value) {
    return find(values.cbegin(), values.cend(), value) != values.cend();
}

int main() {
    short n;
    cin >> n;

    string currentName;
    vector<string> names;

    getline(cin, currentName);

    for (int i = 0; i < n; i++) {
        getline(cin, currentName);
        names.push_back(move(currentName));
    }

    short steps = 0;
    short currentCloset = 1;

    for (auto name : names) {
        short nextCloset = 1;
        if (contains(closet2, name)) nextCloset = 2;
        else if (contains(closet3, name)) nextCloset = 3;
        steps += abs(nextCloset - currentCloset);
        currentCloset = nextCloset;
    }

    cout << steps;

    return 0;
}
