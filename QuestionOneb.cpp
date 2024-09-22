#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    double numerator = 3.0;   // Using double directly
    double denominator = 5.0; // Using double directly

    // Loop to calculate the sum of the series
    while (numerator <= 95.0) {
        sum += numerator / denominator;
        numerator += 2.0;
        denominator += 2.0;
    }

    cout << "Sum of the series is: " << sum <<endl;

    return 0;
}
