#include "polinom.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Polinom pol1;
	Polinom pol2;
	int fp,ch,mc;
	cout << "Введите первый полином:" <<endl;
	cin >> pol1;
	system("cls");
	cout << "Введите второй полином:" << endl;
	cin >> pol2;
	do
	{
		system("cls");
		cout << "Первый полином:" << pol1 << endl;
		cout << "Второй полином:" << pol2 << endl;
		cout << "Выберете желаемую оперцию:" << endl;
		cout << "1.Сумма" << endl;
		cout << "2.Разница(Между первым и вторым полиномами)" << endl;
		cout << "3.Разница(Между вторым и первым полиномами)" << endl;
		cout << "5.Выход" << endl;
		cin >> mc;
		if (mc == 1)
		{
			cout << "Результат:" << pol1 + pol2<<endl;
		}
		if (mc == 2)
		{
			cout << "Результат:" << pol1 - pol2 << endl;
		}
		if (mc == 3)
		{
			cout << "Результат:" << pol2 - pol1 << endl;
		}
		if (mc == 4)
		{
			cout << "Результат:" << pol1 + pol2 << endl;
		}
		if (mc == 5)
		{
			return 0;
		}
		cout << "Выбрать другую операцию?" << endl;
		cout << "1.Да" << endl;
		cout << "2.Нет" << endl;
		cin >> fp;
	} while (fp == 1);
	return 0;
}