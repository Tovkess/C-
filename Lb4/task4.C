#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    while (true) {
        cout << "Enter the first number (1-255): ";
        cin >> num1;
        if (num1 >= 1 && num1 <= 255) break;
        cout << "Invalid input. Please enter a number between 1 and 255." << endl;
    }

    while (true) {
        cout << "Enter the second number (1-255): ";
        cin >> num2;
        if (num2 >= 1 && num2 <= 255) break;
        cout << "Invalid input. Please enter a number between 1 and 255." << endl;
    }

    while (true) {
        cout << "Enter the third number (1-255): ";
        cin >> num3;
        if (num3 >= 1 && num3 <= 255) break;
        cout << "Invalid input. Please enter a number between 1 and 255." << endl;
    }

    while (true) {
        cout << "Enter the fourth number (1-255): ";
        cin >> num4;
        if (num4 >= 1 && num4 <= 255) break;
        cout << "Invalid input. Please enter a number between 1 and 255." << endl;
    }

    cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;

    return 0;
}
