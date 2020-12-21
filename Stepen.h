#pragma once
int Stepen(int number, int stepen)
{
	if (!stepen) return 1;
	else return number * Stepen(number, stepen - 1);
}