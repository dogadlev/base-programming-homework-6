#include "rectangle.h"

Rectangle::Rectangle(int sideA, int sideB) : Parallelogram(sideA, sideB, 90, 90)
{
    name = "Прямоугольник";
}