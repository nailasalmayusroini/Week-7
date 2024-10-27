#include <iostream>
using namespace std;

// Factorial Function
int factorial(int n) {
    if (n>1) {
        return n*factorial(n-1);
    }
    else {
        return 1;
    }
}

int main() {
    int n= 6;

    // Expected Result
    int expectedResult = 720;
    // Actual Result
    int actualResult = factorial(n);

    // Output
    if (expectedResult == actualResult){
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }
    return 0;
}