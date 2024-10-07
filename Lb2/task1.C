#include <iostream>
#include <cmath> 

int main() {
    double px, py; 

    std::cout << "Enter the coordinates of the point : ";
    std::cin >> px >> py;


    if ((py>= 0 && px>=0 && py<=-px+1) ||  (pow(px, 2) + pow(py, 2)<=1 && px<=0 && py<=0) ) {
        std::cout << "The point is inside the triangle." << std::endl;
    } else {
        std::cout << "The point is outside the triangle." << std::endl;
    }

 

    return 0;
}


