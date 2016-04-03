#pragma once
#include <iostream>

class Monom
{
public:
	int pow;
	double koef;
	Monom *next;
	Monom(double coef = 0.0, int st = 0, Monom *_next = NULL);
	Monom(const Monom &m);
	Monom* GetNext();
	void SetNext(Monom *_next);
	Monom& operator=(const Monom &m);
	bool operator==(const Monom &m) const;
	void SetKoef(double coef);
	double GetKoef();
	void SetPower(int st);
	int GetPower();
};
