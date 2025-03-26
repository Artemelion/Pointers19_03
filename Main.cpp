#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    // Test 1: my_increment
    int x = 5;
    my_increment(&x);
    cout << "Incremented (default): " << x << endl;

    my_increment(&x, 10);
    cout << "Incremented (+10): " << x << endl;

    // Test 2: multiply
    int a = 3, b = 4, res = 0;
    multiply(&a, &b, &res);
    cout << "Multiply: " << res << endl;

    // Test 3: negate
    double d = 3.14;
    negate(&d);
    cout << "Negated: " << d << endl;

    // Test 4: setValue
    int val = 0;
    setValue(&val, 42);
    cout << "Set value: " << val << endl;

    // Test 5: concatenateDigits
    int num1 = 12, num2 = 34, combined = 0;
    concatenateDigits(&num1, &num2, &combined);
    cout << "Concatenated: " << combined << endl;

    return 0;
}
