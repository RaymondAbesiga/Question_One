#include <iostream>

using namespace std;

// Function to determine if a year is a leap year
int is_leap_year(unsigned int Y) {
    // Check if the year is a century year
    if (Y % 100 == 0) {
        // Century year is a leap year only if it is divisible by 400
        return (Y % 400 == 0) ? 1 : 0;  // Return 1 for leap year, 0 otherwise
    } else {
        // Non-century year is a leap year if it is divisible by 4
        return (Y % 4 == 0) ? 1 : 0;  // Return 1 for leap year, 0 otherwise
    }
}

int main() {
    unsigned int year;

    // Prompt user for input
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year and print the result
    if (is_leap_year(year) == 1) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
