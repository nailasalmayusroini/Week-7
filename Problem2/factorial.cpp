#include <iostream>
using namespace std;

// Factorial function
int factorial(int n) {
    if (n>1) {
        return n*factorial(n-1);
    }
    else {
        return 1;
    }
}

// Determination
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Output
    cout << factorial(n) << endl;
    return 0;
}