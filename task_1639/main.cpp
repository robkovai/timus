#include <iostream>

using namespace std;

int main() {
    short m, n;
    cin >> m >> n;
    cout << (m * n % 2 == 0 ? "[:=[first]" : "[second]=:]");
    return 0;
}
