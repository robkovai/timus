#include <iostream>

using namespace std;

int main() {
    unsigned short n;
    cin >> n;
    if (n >= 1 && n <= 4) cout << "few";
    if (n >= 5 && n <= 9) cout << "several";
    if (n >= 10 && n <= 19) cout << "pack";
    if (n >= 20 && n <= 49) cout << "lots";
    if (n >= 50 && n <= 99) cout << "horde";
    if (n >= 100 && n <= 249) cout << "throng";
    if (n >= 250 && n <= 499) cout << "swarm";
    if (n >= 500 && n <= 999) cout << "zounds";
    if (n >= 1000) cout << "legion";
    return 0;
}
