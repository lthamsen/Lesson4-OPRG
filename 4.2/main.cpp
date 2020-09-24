#include "Header_lib.h"

int main(void)
{
	while (true)
	{
		float number;

		printf_s("\nIndtast et tal: ");
		scanf_s("%f", &number);

		printf_s("\n%d", isEven(number));

		printf_s("\n%d", isInteger(number));
	}
}