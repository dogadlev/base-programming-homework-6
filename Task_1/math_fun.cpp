#include "math_fun.h"

double add(double num1, double num2) { return (num1 + num2); }
double substract(double num1, double num2) { return (num1 - num2); }
double multiply(double num1, double num2) { return (num1 * num2); }
double divide(double num1, double num2) { return (num1 / num2); }
double power(double num1, double num2)
{
	double res = 1.0;
	if (num2 == 0.0) 
	{
		return res;
	}
	else if (num2 > 0.0)
	{
		for (double i = 0.0; i < num2; ++i)
		{
			res *= num1;
		}
		return res;
	}
	else 
	{
		for (double i = 0.0; i > num2; --i)
		{
			res *= (1.0 / num1);
		}
		return res;
	}
}