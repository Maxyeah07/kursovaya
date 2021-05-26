#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Tables.h"

using namespace std;

Tables::Tables() :OfficeFurniture()
{
	length = 0;
}
Tables::Tables(const Tables& temp) :OfficeFurniture(temp)
{
	length = temp.length;
}
void Tables::print_information()
{
	OfficeFurniture::print_information();
	cout << "Длина: " << length << endl;
}
double Tables::get_length()const
{
	return length;
}
void Tables::set_length(double length)
{
	this->length = length;
}
Tables& Tables::operator=(const Tables& comp)
{
	OfficeFurniture::operator=(comp);
	length = comp.length;
	return *this;
}
void Tables::write_file(string word)
{
	OfficeFurniture::write_file(word);
	ofstream file(word, ios::app);
	file << "Длина: ";
	file << length << endl;
	file.close();
}
void Tables::read_file(ifstream& file)
{
	OfficeFurniture::read_file(file);
	file >> length;
}
void Tables::zapis()
{
	OfficeFurniture::zapis();
	cout << "Длина: ";
	cin >> length;
}