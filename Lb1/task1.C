#include <iostream>
#include <cmath>

int main() {

    const double a = 3.0;
    const double b = 0.501;


    double result = cbrt((pow(a - b, 2) * 
                          pow(sin(1 - a / b), 2) * pow(cos(1 - b / a), 2) * (M_PI / 3) * (M_PI / 3)) / (0.701 * pow(log(fabs(a - b)), 2)));

    std::cout << "The result is " << result << std::endl;

    return 0;
}

