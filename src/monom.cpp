#include "monom.h"
#include <iostream>

Monom::Monom(double coef, int st, Monom *_next)
{
	SetKoef(coef);
	SetPower(st);
	SetNext(_next);
}

Monom::Monom(const Monom &m)
{
	SetKoef(m.koef);
	SetPower(m.pow);
	SetNext(m.next);
}

Monom& Monom::operator=(const Monom &m)
{
	SetKoef(m.koef);
	SetPower(m.pow);
	return *this;
}

bool Monom::operator==(const Monom &m) const
{
	if ((koef == m.koef) && (pow == m.pow))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Monom::SetKoef(double coef)
{
	koef = coef;
}

void Monom::SetPower(int st)
{
	pow = st;
}

void Monom::SetNext(Monom *_next)
{
	next = _next;
}

double Monom::GetKoef()
{
	return koef;
}

int Monom::GetPower()
{
	return pow;
}

Monom* Monom::GetNext()
{
	return next;
}