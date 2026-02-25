// Sentence to Binary through ASCII
#include <iostream>
#include <string.h>
using namespace std;

// int indstring(&char s, &int d);
int main()
{
    char input[2000];
    int decimal[1000], binary[1000];
    int i, j, k, num, n;
    cout << "Welcome To This Program\n";
    cout << "This program Converts A Message into Binary Codes\n";

    cout << "Type Your Message:\n";
    cin >> input;
    n = strlen(input);

    // Converting Individual character in ASCII Demical Codes
    for (i = 0; input[i] != '\0'; i++)
    {
        decimal[i] = (int)input[i];
    }

    cout << "Your Message In Binary Form : ";
    // Convert decimal to binary
    for (i = 0; i < n; i++)
    {
        num = decimal[i];
        int k = 0;

        while (num > 0)
        {
            binary[k] = num % 2;
            num = num / 2;
            k++;
        }

        for (j = k - 1; j >= 0; j--)
        {
            cout << binary[j];
        }
        cout << " ";
    }
}