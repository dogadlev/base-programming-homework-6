#pragma once
#include <string>

class Figure
{
protected:
    int sidesCount = 0;
    std::string name;
public:
    Figure(std::string name, int sidesCount);
    int getSidesCount();
    std::string getName();
    virtual void print();
};