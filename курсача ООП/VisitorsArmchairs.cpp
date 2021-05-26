#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"VisitorsArmchairs.h"
using namespace std;

VisitorsArmchairs::VisitorsArmchairs() :Armchair()
{
	kam = 0;
}
VisitorsArmchairs::VisitorsArmchairs(const VisitorsArmchairs& temp) :Armchair(temp)
{
	kam = temp.kam;
}
void VisitorsArmchairs::print_information()
{
	Armchair::print_information();
	cout << "Количество режимов массажа: " << kam << endl;
}
int VisitorsArmchairs::get_kam()const
{
	return kam;
}
void VisitorsArmchairs::set_kam(int kam)
{
	this->kam = kam;
}
VisitorsArmchairs& VisitorsArmchairs::operator=(const VisitorsArmchairs& comp)
{
	Armchair::operator=(comp);
	kam = comp.kam;
	return *this;
}
void VisitorsArmchairs::write_file(string word)
{
	Armchair::write_file(word);
	ofstream file(word, ios::app);
	file << "Количество режимов массажа: ";
	file << kam << endl;
	file.close();
}
void VisitorsArmchairs::read_file(ifstream& file)
{
	Armchair::read_file(file);
	file >> kam;
}
void VisitorsArmchairs::zapis()
{
	Armchair::zapis();
	cout << "Количество режимов массажа: ";
	cin >> kam;
}