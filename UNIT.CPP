#include<iostream.h>


int main() {
    int units;
    float bill = 0;

    // Input number of units consumed
    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 0.60;
    }
    else if (units <= 300) {
        bill = (100 * 0.60) + ((units - 100) * 0.80);
    }
    else {
        bill = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }

    // Apply surcharge if bill exceeds ₹300
    if (bill > 300) {
        bill += 50;
    }

    cout << "Total electricity bill: ₹" << bill << endl;

    return 0;
}