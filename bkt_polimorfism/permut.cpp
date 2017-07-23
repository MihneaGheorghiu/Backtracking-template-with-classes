#include "permut.h"
#include <iostream>

permut::permut(int v)
{
	n = v;
}

void permut::Init()
{
	st[k] = 0;
}

int permut::Am_Succesor()
{
	if (st[k] < n)
	{
		st[k]++;
		return 1;
	}
	else
		return 0;
}

int permut::E_Valid()
{
	for (int i = 1; i < k; i++)
		if (st[i] == st[k])
			return 0;
	return 1;
}

int permut::Solutie()
{
	return k == n;
}

void permut::Tipar()
{
	for (int i = 1; i <= n; i++)
		std::cout << st[i];
	std::cout << std::endl;
}

