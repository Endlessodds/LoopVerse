#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Input elements
    int i = 0;
    cout << "Enter " << SIZE << " numbers:" << endl;
    while (i < SIZE) {
        cin >> numbers[i];
        i++;
    }

    // Output elements
    i = 0;
    cout << "You entered: ";
    while (i < SIZE) {
        cout << numbers[i] << " ";
        i++;
    }

    cout << endl;
    return 0;
}
