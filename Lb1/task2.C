#include <iostream>
#include <cmath>

int main() {
    
    const double a = 1;
    const double b = 1.201;
    
    std::cout << "The result is " <<
        pow((0.7 * log(a / b) * pow(sin((a + b) * M_PI / 10), 2) +
             0.8 * log(b / a) * pow(cos((a + b) * M_PI / 10), 2)), 1.5) <<
        std::endl;
    return 0;
}