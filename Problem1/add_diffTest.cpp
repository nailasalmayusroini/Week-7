#include <iostream>
using namespace std;

// Addition Function
float add(int a, int b) {
    return (a+b);
}

//Subtraction Function
float diff(int a, int b){
    return (a-b);
}

int main () {
    int n1 = 10;
    int n2 = 26;

    // Expected Result
    int expectedResult = 72;

        int c = add(n1,n2); // answer: 36
        int d = diff(n1,n2); // answer: -16

        // Actual Result
        int actualResult = diff(c,d) + add(c,d); // 52 + 20 = 72
   
    // Output
    if (expectedResult == actualResult) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }
    
    
}