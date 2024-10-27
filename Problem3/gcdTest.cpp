#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    if (a%b == 0) {
        return b;
    }
    else {
        return gcd(a, a%b);
    }
}

int main(){
    int n1 = 120;
    int n2 = 45;

    // Expected Result
    int expectedResult = 30;
    // Actual Result
    int actualResult = gcd(n1, n2);

    // Output make test
    if (expectedResult == actualResult) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }
}