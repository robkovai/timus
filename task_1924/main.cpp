#include <iostream>

using namespace std;

int main() {
    short n;
    short sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << (sum % 2 == 0 ? "black" : "grimy");

    return 0;
}
