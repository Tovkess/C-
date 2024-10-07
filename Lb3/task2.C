#include <iostream>

int main() {
    int day;

    std::cout << "Введіть номер дня тижня (1 - понеділок, 7 - неділя): ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Понеділок: 1, 2, 3 пари" << std::endl;
            break;
        case 2:
            std::cout << "Вівторок: 4, 5 пари" << std::endl;
            break;
        case 3:
            std::cout << "Середа: 1, 2 пари" << std::endl;
            break;
        case 4:
            std::cout << "Четвер: 3, 4, 5 пари" << std::endl;
            break;
        case 5:
            std::cout << "П'ятниця: 1, 2, 4 пари" << std::endl;
            break;
        case 6:
            std::cout << "Субота: 2, 3 пари" << std::endl;
            break;
        case 7:
            std::cout << "Неділя: Вихідний день" << std::endl;
            break;
        default:
            std::cout << "Некоректний номер дня :(( Будь ласка, введіть число від 1 до 7" << std::endl;
    }

    return 0;
}
