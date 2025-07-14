#include <iostream.h>


int main() {
    int n;

    // Input integer value
    cout << "Enter an integer: ";
    cin >> n;

    // Validate input
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        // Print "Well Done" n times
        for (int i = 1; i <= n; i++) {
            cout << "Well Done" << endl;
        }
    }

    return 0;
}