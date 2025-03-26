#pragma once
#include <cmath>

// 1) Increments the value pointed to by ptr by n (default is 1)
void my_increment(int* ptr, int n = 1) {
    *ptr += n;
}

// 2) Multiplies values pointed to by a and b, stores result in result
void multiply(int* a, int* b, int* result) {
    *result = (*a) * (*b);
}

// 3) Negates the value pointed to by ptr
void negate(double* ptr) {
    *ptr = -(*ptr);
}

// 4) Sets the value pointed to by ptr to newValue
void setValue(int* ptr, int newValue) {
    *ptr = newValue;
}

// 5) Concatenates digits from a and b, stores result in result
// e.g., a = 12, b = 34 → result = 1234
void concatenateDigits(int* a, int* b, int* result) {
    int temp = *b;
    int digits = 0;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    *result = (*a) * pow(10, digits) + (*b);
}
