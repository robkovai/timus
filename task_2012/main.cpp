#include <iostream>

using namespace std;

int main() {
    constexpr unsigned short timeMinutes = 4 * 60;
    unsigned short countTasks = 12;

    unsigned short countTasksInFirstHour;
    cin >> countTasksInFirstHour;

    countTasks -= countTasksInFirstHour;

    cout << (timeMinutes / 45 >= countTasks ? "YES" : "NO") << endl;

    return 0;
}
