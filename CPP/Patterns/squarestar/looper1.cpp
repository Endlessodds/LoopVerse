#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the row: ";
    cin >> row;
    cout << "Enter the column: ";
    cin >> col;

    int i = 0;
    while (i < row) {
        int j = 0;  // Reset column counter for each row
        while (j < col) {
            cout << " *";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
