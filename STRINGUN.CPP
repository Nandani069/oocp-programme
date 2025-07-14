#include<iostream.h>>
#include<string.h>

int main() {
    int units;
    float bill = 0.0, surcharge = 0.0, totalBill = 0.0;

    // Input units consumed
    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Calculate base bill
    if (units <= 100) {
        bill = units * 0.60;
    }
    else if (units <= 300) {
        bill = (100 * 0.60) + ((units - 100) * 0.80);
    }
    else {
        bill = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }

    // Apply 15% surcharge if bill > 300
    if (bill > 300) {
        surcharge = bill * 0.15;
    }

    // Total bill = bill + surcharge (if any)
    totalBill = bill + surcharge;

    // Ensure minimum bill is ₹50
    if (totalBill < 50) {
        totalBill = 50;
    }

    // Output final bill
    cout << "Electricity Bill Summary:\n";
    cout << "Base Bill: ₹" << bill << endl;
    if (surcharge > 0) {
        cout << "Surcharge (15%): ₹" << surcharge << endl;
    }
    cout << "Total Bill: ₹" << totalBill << endl;

    return 0;
}