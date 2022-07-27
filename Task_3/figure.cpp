#include <iostream>
#include <string>
#include "figure.h"

Figure::Figure(std::string name, int sidesCount)
{
    this->name = name;
    this->sidesCount = sidesCount;
}
int Figure::getSidesCount() { return sidesCount; }
std::string Figure::getName() { return name; }
void Figure::print() { std::cout << "Количество сторон: " << getSidesCount(); }