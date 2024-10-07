
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4, num5;

    cout << "Enter five values (separated by spaces):" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << num1 << endl;

    cout << ((int)(num2 * 100 + 0.5) / 100.0);
    if (num2 * 100 - ((int)(num2 * 100)) == 0) cout << "0"; 
    cout << endl;

    cout << ((int)(num3 * 1000000 + 0.5) / 1000000.0) << endl;

    cout << ((int)(num4 * 100 + 0.5) / 100.0);
    if (num4 * 100 - ((int)(num4 * 100)) == 0) cout << "0"; 
    cout << endl;

    cout << (int)num5 << endl;

    return 0;
}
