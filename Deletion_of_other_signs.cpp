/* Напишите программу, которая удаляет из строки, введенной пользователем, все пробелы и знаки препинания.*/

#include <iostream>
#include <Windows.h>
#include <string>

inline bool sign_is_ok(const char sign)
{
    if ((sign == ' ') || (sign == '.') || (sign == ',') || (sign == '!') || (sign == '?') || (sign == ':') || (sign == ';') || (sign == '-') || (sign == '"'))
        return false;
    else return true;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Программа убирает знаки препинания и пробелы. Напишите что-нибудь:\n";
    std::string text;
    std::getline(std::cin, text);
    std::cout << "Результат:\n";
    for (const auto& sign : text)
        if (sign_is_ok(sign))
            std::cout << sign;
    std::cout << std::endl;
    return 0;
}