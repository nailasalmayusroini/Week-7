#include <iostream>
using namespace std;

// GCD Function
int gcd(int a, int b) {
    if (a%b == 0) {
        return b;
    }
    else {
        return gcd(a, a%b);
    }
}

// Determination
int main(){
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    // Output
    cout << gcd(n1, n2) << endl;
}