#include <iostream>

using namespace std;

int main() {
    unsigned short n, k;
    cin >> n >> k;

    if (n <= k) cout << 2;
    else {
        const unsigned short sides = n * 2;
        unsigned short minutes = sides / k;
        cout << (sides % k == 0 ? minutes : ++minutes);
    }
    return 0;
}
