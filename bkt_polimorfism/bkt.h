#pragma once

class bkt
{
public:
	int st[10];
	int n, k;
	virtual void Init();
	virtual int Am_Succesor();
	virtual int E_Valid();
	virtual int Solutie();
	virtual void Tipar();
	void run();
};