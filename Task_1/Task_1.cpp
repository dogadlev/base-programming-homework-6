// Homework 6. Task 1.

#include <iostream>
#include <clocale>
#include "math_fun.h"

void getNum1(double &num1) 
{
    std::cout << "Введите первое число: ";
    std::cin >> num1;
}

void getNum2(double &num2)
{
    std::cout << "Введите второе число. (При возведении в степень, выбирайте целое цисло): ";
    std::cin >> num2;
}

void getOption(double &option)
{
    bool exit = false;
    while (!exit)
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> option;
        if (option == 1.0 || option == 2.0 || option == 3.0 || option == 4.0 || option == 5.0)
        {
            exit = true;
        }
        else
        {
            std::cout << "Вы ввели неверную операцию. Попробуйте еще раз!" << std::endl;
        }
    }
}

void printResult(double num1, double num2, double option)
{
    switch (static_cast<int>(option))
    {
    case 1: std::cout << num1 << " + " << num2 << " = " << add(num1, num2);
        break;
    case 2: std::cout << num1 << " - " << num2 << " = " << substract(num1, num2);
        break;
    case 3: std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2);
        break;
    case 4: std::cout << num1 << " / " << num2 << " = " << divide(num1, num2);
        break;
    case 5: std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2);
    default:
        break;
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    double num1 = 0.0;
    double num2 = 0.0;
    double option = 0.0;
    bool exit = false;
    getNum1(num1);
    while (!exit)
    {
        getNum2(num2);
        getOption(option);
        if (option == 4.0 && num2 == 0.0)
        {
            std::cout << "Вы выбрали второе число равное нулю. На ноль делить нельзя! Попробуйте еще раз." << std::endl;
        }
        else if (option == 5.0 && num2 - static_cast<double>(static_cast<int>(num2)) != 0.0)
        {
            std::cout << "Программа не работает с дробными степенями. Попробуйте еще раз." << std::endl;
        }
        else
        {
            exit = true;
        }
    }
    printResult(num1, num2, option);
    return 0;
}