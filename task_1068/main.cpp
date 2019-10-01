#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;

    long sum = 0;

    if (n <= 0) {
        for (short i = n; i <= 1; i++)
            sum += i;
    } else {
        for (short i = 1; i <= n; i++)
            sum += i;
    }

    cout << sum;

    return 0;
}
