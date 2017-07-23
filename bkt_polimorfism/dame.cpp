#include "dame.h"
#include <math.h>

dame::dame(int v) : permut(v)
{

}

int dame::E_Valid()
{
	for (int i = 1; i < k; i++)
		if (st[i] == st[k] || abs(st[k] - st[i]) == abs(k - i))
			return 0;
	return 1;
}