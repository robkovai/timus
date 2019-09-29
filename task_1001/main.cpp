#include <iostream>
#include <iomanip>
#include <stack>
#include <math.h>

using namespace std;

int main() {
    long double number;
    stack<long double> numbers;

    while (cin >> number)
        numbers.push(move(number));

    cout << setprecision(4) << fixed;
    while (!numbers.empty()) {
        cout << sqrtl(numbers.top()) << endl;
        numbers.pop();
    }

    return 0;
}
