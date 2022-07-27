#include <iostream>
#include "quadrangle.h"

Quadrangle::Quadrangle(std::string name, int sidesCount) : Figure(name, sidesCount) {}
Quadrangle::Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Quadrangle("Четырёхугольник", 4)
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}
void Quadrangle::print()
{
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << "\n\n";
}