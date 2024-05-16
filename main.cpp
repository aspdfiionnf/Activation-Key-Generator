#include <iostream>
#include <windows.h>
#include "keygen.hpp"
#include "input_utils.hpp"


/// <summary>Main program algorithm</summary>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    bool f = false;
    std::string input = "-";
    int x;

    while (!f) {
        input_utils::clearConsole();
        std::cout << "Значение ключа в текущий момент: ";
        std::getline(std::cin, input);

        if (input_utils::isNumber(input) && (x = std::stoi(input)) > 0) f = true;
        else {
            std::cout << "Введённое значение должно быть целым положительным числом!\n";
            Sleep(1500);
        }
    }
    std::cout << "Значение ключа через минуту: " << keygen::nextKey(x) << "\n\n(Нажмите любую клавишу для выхода)";
    std::cin.ignore();
}