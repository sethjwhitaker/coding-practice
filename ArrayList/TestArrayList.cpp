#include <iostream>
#include "ArrayList.h"
int main() {
    using std::cin;
    using std::cout;

    ArrayList<int> list = ArrayList<int>();
    while (true) {
        int n;
        cout << "\nEnter num: ";
        cin >> n;

        // Enter 0 to quit
        if (n == 0) break;

        list.append(n);
        cout << "\nList: ";
        for (int i = 0; i < list.getSize(); i++) {
            cout << "\n" << list[i];
        }
        cout << "\n\nRepeat? (y/n)";
        char c;
        cin >> c;
        if (c != 'y') break;

    }
}

