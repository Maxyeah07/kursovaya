#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Desk.h"

using namespace std;

Desk::Desk() :Tables()
{
	count = 0;
}
Desk::Desk(const Desk& temp) :Tables(temp)
{
	count = temp.count;
}
void Desk::print_information()
{
	Tables::print_information();
	cout << "Количество полок: " << count << endl;
}
int Desk::get_count()const
{
	return count;
}
void Desk::set_count(int depth)
{
	this->count = depth;
}
Desk& Desk::operator=(const Desk& comp)
{
	Tables::operator=(comp);
	count = comp.count;
	return *this;
}
void Desk::write_file(string word)
{
	Tables::write_file(word);
	ofstream file(word, ios::app);
	file << "Количество полок: ";
	file << count << endl;
	file.close();
}
void Desk::read_file(ifstream& file)
{
	Tables::read_file(file);
	file >> count;
}
void Desk::zapis()
{
	Tables::zapis();
	cout << "Количество полок: ";
	cin >> count;
}