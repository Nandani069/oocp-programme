#include<iostream.h>


int main() {
    float celsius, fahrenheit;

    // Input Celsius temperature
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}