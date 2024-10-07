#include <iostream>
#include <cmath>

int main() {

    double x, a, c, y;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of c: ";
    std::cin >> c;

    if (x > 0) {
        y = (x + 3 * a) * c;
    } else {
        y = 2 * std::pow(x, 2) + a;
    }


    std::cout << "The result is " << y << std::endl;

    return 0;
}