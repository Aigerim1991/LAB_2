#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int Otvet;
	cout << "������ ����� ��������������� ����������?" << "\n";
	cin >> Otvet;
	if (Otvet==1)
	{
		cout << "��" << "\n";
		cout << "�� ������?" << "\n";
		cout << "���" << "\n";
		cout << "������ ������?" << "\n";
		cout << "���" << "\n";
		cout << "������ ����������?" << "\n";
		cout << "��" << "\n";
		cout << "���� �����?" << "\n";
		cout << "���" << "\n";
		cout << "�� ��������� ������?" << "\n";
		cout << "�� ��, ���" << "\n";
		cout << "������" << "\n";

	}
	else
	{
		cout << "���" << "\n";
		cout << "������ ����������� � ��������" << "\n";
		cout << "���" << "\n";
		cout << "������ ����������� � �������?" << "\n";
		cout << "��" << "\n";
		cout << "�� ������?" << "\n";
		cout << " ��� "  << "�������" << "\n";
		
	}




}