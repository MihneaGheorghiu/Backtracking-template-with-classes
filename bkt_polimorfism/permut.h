#pragma once
#include "bkt.h"

class permut : public bkt
{
public:
	permut(int v);
	virtual void Init();
	virtual int Am_Succesor();
	virtual int E_Valid();
	virtual int Solutie();
	virtual void Tipar();
};