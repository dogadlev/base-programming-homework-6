// Homework 6. Task_2.

#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>
#include "counter.h"

bool bool_inputRequired()
{
    std::string response = "";
    while (true)
    {
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> response;
        if (response == "��")
        {
            return true;
        }
        else if (response == "���")
        {
            return false;
        }
        else std::cout << "������ �����! ���������� ��� ���." << std::endl;
    }
}

int getCount()
{
    int initCount = 0;
    std::cout << "������� ��������� �������� �������� (����������� �����): ";
    std::cin >> initCount;
    return initCount;
}

void userInterface(Counter OCounter)
{
    char buf = 'NUL';
    bool exit = false;
    while (!exit)
    {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> buf;
        switch (buf)
        {
        case '+':
            OCounter.increaseCount();
            break;
        case '-':
            OCounter.reduceCount();
            break;
        case '=':
            OCounter.checkCount();
            break;
        case 'x':
            std::cout << "�� ��������!";
            exit = true;
            break;
        default:
            std::cout << "�������� ����. ���������� ��� ���." << std::endl;
            break;
        }
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //User prefers to input initial value;
    //bool_inputRequired() return true;
    //getCount() return int value to initialize OCounter;

    if (bool_inputRequired())
    {
        Counter OCounter(getCount());
        userInterface(OCounter);
    }

    //User does not prefer to input initial value;
    //OCounter is initialized with default initial value equals 1;

    else
    {
        Counter OCounter;
        userInterface(OCounter);
    }
    return 0;
}