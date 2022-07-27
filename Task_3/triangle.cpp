#include <iostream>
#include <string>
#include "triangle.h"

Triangle::Triangle(std::string name, int sidesCount) : Figure(name, sidesCount) {}
Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle("Треугольник", 3)
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}
void Triangle::print() 
{
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << "\n\n";
}