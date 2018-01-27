#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int Otvet;
	cout << "Хотите стать професиональным музыкантом?" << "\n";
	cin >> Otvet;
	if (Otvet==1)
	{
		cout << "Да" << "\n";
		cout << "Вы богаты?" << "\n";
		cout << "Нет" << "\n";
		cout << "Любите деньги?" << "\n";
		cout << "Нет" << "\n";
		cout << "Любите отрываться?" << "\n";
		cout << "Да" << "\n";
		cout << "Пиво пьете?" << "\n";
		cout << "Нет" << "\n";
		cout << "Вы страстная натура?" << "\n";
		cout << "Хе хе, нет" << "\n";
		cout << "Домбра" << "\n";

	}
	else
	{
		cout << "Нет" << "\n";
		cout << "Хотите встречаться с девушкой" << "\n";
		cout << "Нет" << "\n";
		cout << "Хотите встречаться с парнями?" << "\n";
		cout << "Да" << "\n";
		cout << "Вы парень?" << "\n";
		cout << " Нет "  << "Ударные" << "\n";
		
	}




}