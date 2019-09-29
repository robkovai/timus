#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned short k, n;
    cin >> k >> n;

    vector<unsigned short> countCars;
    countCars.reserve(n);

    unsigned short currentCars;
    for (unsigned short i = 0; i < n; i++) {
        cin >> currentCars;
        countCars.push_back(move(currentCars));
    }

    currentCars = 0;
    for (unsigned short i = 0; i < countCars.size(); i++) {
        currentCars += countCars.at(i);
        currentCars -= min(currentCars, k);
    }

    cout << currentCars;

    return 0;
}
