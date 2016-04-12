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
}


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
		/*cout << "Введите моном:" << endl;
		cout << "Коэффициент:";*/
		s >> kof;
		/*cout << "Степень при x:"; */
		s >> x;
		/*cout << "Степень при y:"; */
		s >> y;
		/*cout << "Степень при z:"; */
		s >> z;
		if (x < 0 || y < 0 || z < 0)
		{
			throw "Степени отрицательны!";
		}
		if (x > 9 || y > 9 || z > 9)
		{
			throw "Степени имеют слишком большой размер!";
		}
		st = x * 100 + y * 10 + z;
		pol.AddElem(kof, st);
		cout << "Хотите добавить моном?" << endl;
		cout << "1.Да" << endl;
		cout << "2.Нет" << endl;
		s >> fp;
		if (fp == 1)
		{
			system("cls");
			cout <<"Исходый полином:"<< pol << "+" << endl;
		}
	} while (fp == 1);
	return s;
}

ostream& operator<<(ostream &f, Polinom &pol)
{
	Polinom o(pol);
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
			f <<h->GetKoef() << "*x^" << h->GetPower() / 100 << "*y^" << (h->GetPower() / 10) % 10 << "*z^" << h->GetPower() % 10 ;
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
			f << h->GetKoef() << "*x^" << h->GetPower() / 100 << "*y^" << (h->GetPower() / 10) % 10 << "*z^" << h->GetPower() % 10;
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
		f << " + " << h->GetKoef() << "*x^" << h->GetPower() / 100 << "*y^" << (h->GetPower() / 10) % 10 << "*z^" << h->GetPower() % 10;
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
Polinom& Polinom::operator*(const Polinom &pol) const
{
	Polinom *result = new Polinom;
	Polinom o(*this);
	for (Monom *i = pol.pHead; i != NULL; i = i->GetNext())
	{
		for (Monom *j = o.getHead(); j != NULL; j = j->GetNext())
		{
			int x = 0;
			int y = 0;
			int z = 0;
			x = (i->GetPower()) % 10 + (j->GetPower()) % 10;
			y = ((i->GetPower()) / 10) % 10 + ((j->GetPower()) / 10) % 10;
			z = (i->GetPower()) / 100 + (j->GetPower()) / 100;
			if (x > 9 || y > 9 || z > 9)
			{
				throw "Степени слишком большие!";
			}
			(*result).AddElem(i->GetKoef() * j->GetKoef(), i->GetPower() + j->GetPower());
		}
	}
	return *result;
}

Polinom& Polinom::operator=(const Polinom &pol) 
{
	this->DelElem();
	pHead = pol.pHead;
	Monom *pol1 = pol.pHead;
	Monom *pol2 = (*this).getHead();
	pol2 = pol1;
	while (pol1 != NULL)
	{
		pol2 = pol1;
		pol1 = pol1->GetNext();
		pol2 = pol2->GetNext();
	}
	return *this;
}

bool Polinom:: operator==(const Polinom &pol) const
{
	Polinom *pol1 = new Polinom(pol);
	if (pHead == NULL)
	{
		if (pol1->pHead == NULL) 
			return true;
		else 
			return false;
	}
	Monom *i = pHead;
	Monom *j = pol1->pHead;
	int o(1);
	while (i != NULL)
	{
		if ((i->GetKoef() != j->GetKoef()) || (i->GetPower() != j->GetPower()))
		{
			o = 0;
			break;
		}
		i = i->GetNext();
		j = j->GetNext();
	}
	if (o == 1) 
		return true;
	else 
		return false;
}