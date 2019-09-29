#include <iostream>

using namespace std;

int main() {
    int lock1, lock2;
    cin >> lock1 >> lock2;
    cout << (lock1 % 2 == 0 || lock2 % 2 != 0 ? "yes" : "no") << endl;
    return 0;
}
