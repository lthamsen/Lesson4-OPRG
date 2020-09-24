#include "Header_lib.h"

int isEven(double number)
{
	if (fmod(number, 2) == 0)
		return true;
	else
		return false; 
}

int isInteger(double number)
{
	if (fmod(number, 1) == 0)
		return true;
	else
		return false;
}