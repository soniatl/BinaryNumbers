//
//  main.cpp
//  BinaryNumbers
//
//  Created by Sonia Lopchan on 9/25/24.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number == 0) {
        cout << "Binary representation: 0" << endl;
    } else {
        // A string to store binary number
        string binary = "";

        // Keep dividing the number by 2 until either 0 or 1
        while (number > 0) {
            binary = (number % 2 == 0 ? "0" : "1") + binary;
            number /= 2;
        }

        // Prints binary string
        cout << "Binary representation: " << binary << endl;
    }

    return 0;
}

