#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include "IOfficeFurniture.h"
#include "OfficeFurniture.h"
#include "Chairs.h"
#include "OfficeChairs.h"
#include "Armchair.h"
#include "ConferenceChairs.h"
#include "OrdinaryChairs.h"
#include "VisitorsArmchairs.h"
#include "StaffArmchairs.h"
#include "Tables.h"
#include "ConferenceTables.h"
#include "Desk.h"
#include "Vector.h"
#include "Exception.h"
using namespace std;

template<class T>
bool sort_price(const T& stat1, const T& stat2) {
	if (stat1->get_price() < stat2->get_price()) return true;
	return false;
}
template<class T>
bool FindByName(string value, const T& stat) {
	if (value == stat->get_name()) return true;
	return false;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int	choose, temp = 1, count, i = 0, num_error = 1;
	cout << "Введите количество элементов, которые Вы хотите ввести: ";
	cin >> count;
	Vector<IOfficeFurniture*>vector(count);
	cout << "Выберите, каким образом Вы хотите добавить элементы:" << endl;
	cout << "1 - ввод с клавиатуры" << endl;
	cout << "2 - ввод из файла" << endl;
	cout << "0 - выход из программы" << endl;
	cin >> choose;
	switch (choose)
	{
	case 0:
		return 0;
	case 1:
		while (i < count)
		{
			cout << "Выберите, что хотите ввести:" << endl;
			cout << "1 - Обычные офисные стулья" << endl;
			cout << "2 - Кресла обычные" << endl;
			cout << "3 - Офисные конференц-стулья" << endl;
			cout << "4 - Мягкие обычные стулья" << endl;
			cout << "5 - Кресла для посетителей" << endl;
			cout << "6 - Кресла для персонала" << endl;
			cout << "7 - Письменные столы" << endl;
			cout << "8 - Столы для переговоров" << endl;
			int object;
			cin >> object;
			switch (object)
			{
			case 1:
				vector.Plus(new OfficeChairs(), i);
				vector(i)->zapis();
				break;
			case 2:
				vector.Plus(new Armchair(), i);
				vector(i)->zapis();
				break;
			case 3:
				vector.Plus(new ConferenceChairs(), i);
				vector(i)->zapis();
				break;
			case 4:
				vector.Plus(new OrdinaryChairs(), i);
				vector(i)->zapis();
				break;
			case 5:
				vector.Plus(new VisitorsArmchairs(), i);
				vector(i)->zapis();
				break;
			case 6:
				vector.Plus(new StaffArmchairs(), i);
				vector(i)->zapis();
				break;
			case 7:
				vector.Plus(new Desk(), i);
				vector(i)->zapis();
				break;
			case 8:
				vector.Plus(new ConferenceTables(), i);
				vector(i)->zapis();
				break;
			}
			i++;
		}
		break;
	case 2:
		string put;
		cout << "Введите путь до файла: ";
		cin >> put;
		while (i < count)
		{
			cout << "Выберите класс файла:" << endl;
			cout << "1 - Обычные офисные стулья" << endl;
			cout << "2 - Кресла обычные" << endl;
			cout << "3 - Офисные конференц-стулья" << endl;
			cout << "4 - Мягкие обычные стулья" << endl;
			cout << "5 - Кресла для посетителей" << endl;
			cout << "6 - Кресла для персонала" << endl;
			cout << "7 - Письменные столы" << endl;
			cout << "8 - Столы для переговоров" << endl;
			int object;
			cin >> object;
			try {
				switch (object)
				{
				case 1:
				{
					vector.Plus(new OfficeChairs(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 2:
				{
					vector.Plus(new Armchair(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 3:
				{
					vector.Plus(new ConferenceChairs(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 4:
				{
					vector.Plus(new OrdinaryChairs(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 5:
				{
					vector.Plus(new VisitorsArmchairs(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 6:
				{
					vector.Plus(new StaffArmchairs(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 7:
				{
					vector.Plus(new Desk(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				case 8:
				{
					vector.Plus(new ConferenceTables(), i);
					ifstream is(put.c_str());
					if (!is) throw Exception("Не удаётся открыть файл");
					else
					{
						vector(i)->read_file(is);
						is.close();
					}
					break;
				}
				}
			}
			catch(Exception& beda_file)
			{
				cout << "Ошибка " << num_error << endl;
				cout << beda_file.get_error() << endl;
				num_error++;
			}
			i++;
		}
		break;
	}
	
	while (temp != 0)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - очистка объектов" << endl;
		cout << "2 - отсортировать по цене" << endl;
		cout << "3 - вывод всей информации об объекте" << endl;
		cout << "4 - поиск объекта" << endl;
		cout << "5 - запись в файл" << endl;
		cout << "0 - выход" << endl;
		cin >> choose;
		string number;
		try {
			switch (choose)
			{
			case 0:
				temp = 0;
				break;
			case 1:
				vector.clear();
				cout << "Очищено" << endl;
				break;
			case 2:
				vector.sort(sort_price);
				break;
			case 3:
				cout << "Всего элементов: " << vector.length() << endl;
				vector.print();
				break;
			case 4:
			{
				cout << "Введите название объекта: " << endl;
				cin >> number;
				IOfficeFurniture** temp = vector.Search(number, FindByName);
				if (temp == nullptr) cout << "Вашего элемента не существует..." << endl;
				else (*temp)->print_information();
				break;
			}
			case 5:
				if (vector.i == 0)throw Exception("Элементов нет");
				int num;
				string put;
				cout << "Введите номер, записываемого объекта: ";
				cin >> num;
				cout << "Укажите путь для сохранения файла: ";
				cin >> put;
				vector(num - 1)->write_file(put);
				break;
			}
		}
		catch (Exception& beda)
		{
			cout << "Ошибка " << num_error << endl;
			cout << beda.get_error() << endl;
			num_error++;
		}
	}
	system("pause");
	return 0;
}
