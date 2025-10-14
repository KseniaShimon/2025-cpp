#include <iostream>
using namespace std;

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2) {
        if (y2 - y1 == 1) {
            cout << "YES";
        }
        else if (y1 == 2 && y2 == 4) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
    
    return 0;
}