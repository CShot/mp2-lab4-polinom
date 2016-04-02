#include "monom.h"

Monom::Monom(double coef, int p, Monom *_next)
{
	SetKoef(coef);
	SetPower(p);
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

void Monom::SetPower(int p)
{
	pow = p;
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