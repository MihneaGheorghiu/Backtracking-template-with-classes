#pragma once
#include "permut.h"

class dame : public permut
{
public:
	dame(int v);
	virtual int E_Valid();
};