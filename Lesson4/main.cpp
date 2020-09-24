#include "Header.h"

int main(void)
{
	int tal1, tal2;

	printf_s("Skriv tal 1: ");
	scanf_s("%d", &tal1);
	printf_s("\nSkriv tal 2: ");
	scanf_s("%d", &tal2);

	printf_s("%d", sumBiggerThan100(tal1, tal2));

}

