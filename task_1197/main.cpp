#include <iostream>
#include <vector>

using namespace std;

struct Position {
    char number;
    char letter;
};

int main() {
    unsigned short count;
    cin >> count;

    vector<Position> positions;
    for (unsigned short i = 0; i < count; i++) {
        Position position;
        cin >> position.letter >> position.number;
        positions.push_back(move(position));
    }

    for (auto position : positions) {
        unsigned short cells = 8;
        switch (position.letter) {
            case 'c': case 'd': case 'e': case 'f':
                if (position.number < '3' || position.number > '6') cells -= 2;
                if (position.number < '2' || position.number > '7') cells -= 2;
                break;
            case 'b': case 'g':
                cells -= 2;
                if (position.number < '3' || position.number > '6') cells -= 2;
                if (position.number < '2' || position.number > '7') cells -= 1;
                break;
            case 'a': case 'h':
                cells -= 4;
                if (position.number < '3' || position.number > '6') cells -= 1;
                if (position.number < '2' || position.number > '7') cells -= 1;
                break;
        }
        cout << cells << endl;
    }

    return 0;
}
