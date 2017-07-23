#include "bkt.h"

void bkt::Init()
{

}

int bkt::Am_Succesor()
{
	return 0;
}

int bkt::E_Valid()
{
	return 0;
}

int bkt::Solutie()
{
	return 0;
}

void bkt::Tipar()
{

}

void bkt::run()
{
	int AS;
	k = 1;
	Init();
	while (k > 0)
	{
		do
		{
		} while ( (AS = Am_Succesor() ) && !E_Valid() );
		if (AS)
			if (Solutie())
				Tipar();
			else
			{
				k++;
				Init();
			}
		else
			k--;
	}
}