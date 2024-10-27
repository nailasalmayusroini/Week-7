#include <iostream>
using namespace std;

// Addition Function 
float add(int a, int b) {
    return (a+b);
}

// Difference Funtion
float diff(int a, int b){
    return (a-b);
}

int main () {
    int n1, n2;
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    int c = add(n1,n2);
    int d = diff(n1,n2);

    // Output
    cout << diff(c,d) + add(c,d) << endl;

}