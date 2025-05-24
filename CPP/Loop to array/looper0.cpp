#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Input elements
    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Output elements
    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}
