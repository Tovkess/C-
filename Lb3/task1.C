#include <iostream>

int main() {
    int N;

    while (true) {
        std::cout << "Введіть трьохзначне додатне число: ";
        std::cin >> N;

        if (N < 100 || N > 999) {
            std::cout << "Це не троьхзначне число!" << std::endl;
            continue;
        }

        int product = 1;
        bool hasEven = false;
        while (N > 0) {
            int digit = N % 10;
            if (digit % 2 == 0) {
                product *= digit;
                hasEven = true;
            }
            N /= 10;
        }

        if (hasEven) {
            std::cout << "Добуток парних цифр: " << product << std::endl;
        } else {
            std::cout << "Парних цифр немає." << std::endl;
        }

        break;
    }

    return 0;
}


