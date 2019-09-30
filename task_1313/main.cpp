#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t n;
    cin >> n;

    vector<vector<short> > values;

    short currentValue;
    for (size_t i = 0; i < n; i++) {
        vector<short> currentValues;
        for (size_t j = 0; j < n; j++) {
            cin >> currentValue;
            currentValues.push_back(move(currentValue));
        }
        values.push_back(move(currentValues));
    }

    vector<short> results;
    size_t currentPosX = 0;
    size_t currentPosY = 0;

    while (currentPosX < n && currentPosY < n) {
        results.push_back(values[currentPosY][currentPosX]);
        if (currentPosX == n - 1) {
            currentPosX = currentPosY + 1;
            currentPosY = n - 1;
        }
        else if (currentPosY == 0) {
            currentPosY = currentPosX + 1;
            currentPosX = 0;
        } else {
            currentPosY--;
            currentPosX++;
        }
    }

    for (auto value : results)
        cout << value << " ";

    return 0;
}
