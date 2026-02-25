//Number Conversion : Decimal to Octal
#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a Decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Octal: 0" << endl;
        return 0;
    }

    string binary = "";
    int num = decimal;

    while (num > 0) {
        binary = to_string(num % 8) + binary;
        num /= 8;
    }

    cout << "Octal: " << binary << endl;
    return 0;
}

