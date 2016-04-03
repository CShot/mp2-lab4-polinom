#pragma once
#include "monom.h"
#include <locale>
using namespace std;

class Polinom 
{
public:
	Monom *pHead;
	Monom* getHead();
	Polinom();
	~Polinom();
	Polinom(const Polinom &pol);
	void AddElem(double coef, int st);
	void DelElem();
	void SortElem();
	Polinom& operator+(const Polinom &pol) const;
	Polinom& operator-(const Polinom &pol) const;
	Polinom& operator*(const Polinom &pol) const;
	Polinom& operator=(const Polinom &pol);
	bool operator==(const Polinom &pol);
	friend istream& operator>>(istream &s, Polinom &pol);
	friend ostream& operator<<(ostream &f, Polinom &pol);
};