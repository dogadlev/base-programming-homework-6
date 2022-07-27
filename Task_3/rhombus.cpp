#include "rhombus.h"

Rhombus::Rhombus(int sideA, int angleA, int angleB) : Parallelogram(sideA, sideA, angleA, angleB)
{
    name = "Ромб";
}