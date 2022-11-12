#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    struct client {
        std::string name = "Пусто";
        int number = 0;
        int balance = 0;
    };
    client first;
    std::cout << "Введите номер счёта : ";
    std::cin >> first.number;
    std::cout << "Введите имя владельца : "; 
    std::cin >> first.name;
    std::cout << "Введите баланс : ";
    std::cin >> first.balance;
    std::cout << "Введите новый баланс : ";
    std::cin >> first.balance;
    std::cout << first.name << std::endl;
    std::cout << "Ваш счёт : " << first.name << ", " << first.number << ", " << first.balance << std::endl;
}
