ENC221-0100/2024 ANYANGO LYNN  CINDY 
#include <iostream>
Using namespace std;

// Function returns a reference to the largest fraction
Double& largestFraction(double& a, double& b, double& c) {
    If (a >= b && a >= c)
        Return a;
    Else if (b >= a && b >= c)
        Return b;
    Else
        Return c;
}

Int main() {
    Double f1, f2, f3;

    Cout << “Enter first fraction: “;
    Cin >> f1;
    Cout << “Enter second fraction: “;
    Cin >> f2;
    Cout << “Enter third fraction: “;
    Cin >> f3;

    // Call function
    Double& largest = largestFraction(f1, f2, f3);

    Cout << “Largest fraction is: “ << largest << endl;

    // Demonstrate return-by-reference
    Largest = largest + 1;  // modifies the original variable

    Cout << “After modification:” << endl;
    Cout << “f1 = “ << f1 << “, f2 = “ << f2 << “, f3 = “ << f3 << endl;

    Return 0;
}
