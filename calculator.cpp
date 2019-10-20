#include "calculator.h"

# adding operation of two float numbers 
# with fixing truncation error
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

# subtraction operation of two float numbers 
# using function Add with fixed truncation error
int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

# multiplication operation of two float numbers 
# with fixing truncation error
int Calculator::Mul (double a, double b)
{
	return a * b + 0.5;
}
