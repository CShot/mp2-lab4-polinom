#include "polinom.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Polinom pol1;
	Polinom pol2;
	int fp,mc;
	cout << "������� ������ �������:" << endl;
	cin >> pol1;
	system("cls");
	cout << "������ �������:" << pol1 << endl;
	cout << "������� ������ �������:" << endl;
	cin >> pol2;
	do
	{
		system("cls");
		cout << "������ �������:" << pol1 << endl;
		cout << "������ �������:" << pol2 << endl;
		cout << "�������� �������� �������:" << endl;
		cout << "1.�����" << endl;
		cout << "2.�������" << endl;
		cout << "3.������������" << endl;
		cout << "4.�����" << endl;
		cin >> mc;
		if (mc == 1)
		{ 
			cout << "���������:" << pol1 + pol2<<endl;
		}
		if (mc == 2)
		{
			cout << "���������:" << pol1 - pol2 << endl;
		}
		if (mc == 3)
		{
			cout << "���������:" << pol1 * pol2 << endl;
		}
		if (mc == 4)
		{
			return 0;
		}
		cout << "������� ������ ��������?" << endl;
		cout << "1.��" << endl;
		cout << "2.���" << endl;
		cin >> fp;
	} while (fp == 1);
	return 0;
}