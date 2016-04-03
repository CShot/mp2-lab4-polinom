#include "polinom.h"
using namespace std;

Monom* Polinom::getHead()
{
	return pHead;
}

Polinom::Polinom()
{
	pHead = NULL;
}

Polinom::Polinom(const Polinom &pol)
{
	Monom *var = new Monom;
	pHead = new Monom;
	pHead->SetNext(NULL);
	var = pol.pHead;
	while (var != NULL)
	{
		AddElem(var->GetKoef(), var->GetPower());
		var = var->GetNext();
	}
}

Polinom::~Polinom()
{
	/*elem = new Monom;
	while (pHead != NULL)
	{
		elem = pHead;
		delete pHead;
		pHead = elem;
	}*/
}

void Polinom::AddElem(double coef, int st)
{
	if (coef == 0)
	{
		return;
	}
	Monom *var = pHead;
	bool flag = false;
	Monom *m = new Monom(coef, st, pHead);
	while (var != NULL)
	{
		if (var->GetPower() == st)
		{
			flag = true;
			break;
		}
		var = var->GetNext();
	}
	if (flag == true)
	{
		var->SetKoef(coef + var->GetKoef());
	}
	else
	{
		pHead = m;
	}
	/*SortElem();*/
}

/*void Polinom::SortElem()
{
	Monom *i = pHead;
	Monom *j = i;
	for (i; i != NULL; i = i->GetNext())
	{
		for (j; j != NULL; j = j->GetNext())
		{
			if (j->GetPower() >= i->GetPower())
			{
				swap(i->pow, j->pow);
				swap(i->koef, j->koef);
			}
		}
	}
}
*/

void Polinom::DelElem()
{
	Monom *elem = new Monom;
	while (pHead != NULL)
	{
		elem = pHead;
		delete pHead;
		pHead = elem;
	}
}

istream &operator>>(istream &s, Polinom &pol)
{
	setlocale(LC_ALL, "Russian");
	double kof;
	int x, y, z;
	int fp,st;
	do
	{
		cout << "Коэффициент:"<<endl;
		s >> kof;
		cout << "Степени:"<<endl;
		cout << "x=";
		s >> x;
		cout << "y=";
		s >> y;
		cout << "z=";
		s >> z;
		st = x * 400 + y * 20 + z;
		pol.AddElem(kof, st);
		cout << "Вы хотите продолжить ?" << endl;
		cout << "1.Да" << endl;
		cout << "2.Нет" << endl;
		s >> fp;
	} while (fp == 1);
	return s;
}

ostream& operator<<(ostream &f, Polinom &pol)
{
	Polinom o(pol);
	/*o.SortElem();*/
	Monom *h = o.pHead;
	if (h == NULL)
	{
		f << h->GetKoef();
		return f;
	}
	if (h->GetNext() == NULL)
	{
		if (h->GetKoef() == 0)
		{
			f << h->GetKoef();
			return f;
		}
		else if (h->GetPower() == 0)
		{
			f << h->GetKoef();
		}
		else
		{
			f <<h->GetKoef() << "*x^" << h->GetPower() / 400 << "y^" << (h->GetPower() / 20) % 20 << "z^" << h->GetPower() % 20 ;
		}
		return f;
	}
	while (h->GetNext() != NULL)
	{
		if (h->GetKoef() == 0.0)
		{
			h = h->GetNext();
		}
		else if (h->GetPower() == 0)
		{
			f << h->GetKoef();
			h = h->GetNext();
		}
		else
		{
			f << h->GetKoef() << "*x^" << h->GetPower() / 400 << "y^" << (h->GetPower() / 20) % 20 << "z^" << h->GetPower() % 20;
			h = h->GetNext();
		}
		if (h->GetNext() != NULL)
		{
			f << "+";
		}
	}
	if (h->GetKoef() == 0)
	{			
		return f;
	}
	else if (h->GetPower() == 0)
	{
		f << " + " << h->GetKoef();
	}
	else
	{
		f << " + " << h->GetKoef() << "*x^" << h->GetPower() / 400 << "y^" << (h->GetPower() / 20) % 20 << "z^" << h->GetPower() % 20;
	}
return f;
}

Polinom& Polinom::operator+(const Polinom &pol) const
{
	Polinom *result = new Polinom(*this);
	Monom *h = pol.pHead;
	while (h != NULL)
	{
		(*result).AddElem(h->GetKoef(), h->GetPower());
		h = h->GetNext();
	}
	return *result;
}

Polinom& Polinom::operator-(const Polinom &pol) const
{
	Polinom *result = new Polinom(*this);
	Monom *h = pol.pHead;
	while (h != NULL)
	{
		(*result).AddElem(-h->GetKoef(), h->GetPower());
		h = h->GetNext();
	}
	return *result;
}