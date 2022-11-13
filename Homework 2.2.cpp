#include <iostream>
#include <Windows.h>

struct client {
        std::string name = "Пусто";
        int number = 0;
        int balance = 0;
};

void new_balance(client* cl);

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    client first;
    std::cout << "Введите номер счёта : ";
    std::cin >> first.number;
    std::cout << "Введите имя владельца : "; 
    std::cin >> first.name;
    std::cout << "Введите баланс : ";
    std::cin >> first.balance;
    new_balance(&first);
    std::cout << "Ваш счёт : " << first.name << ", " << first.number << ", " << first.balance << std::endl;
}
void new_balance(client* cl) {
    std::cout << "Введите новый баланс : ";
    std::cin >> cl->balance;
}
