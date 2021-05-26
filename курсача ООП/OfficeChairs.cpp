#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OfficeChairs.h"

using namespace std;

OfficeChairs::OfficeChairs() : Chairs()
{
	height = 0;
}
OfficeChairs::OfficeChairs(const OfficeChairs& chair) :Chairs(chair)
{
	height = chair.height;
}
void OfficeChairs::print_information()
{
	Chairs::print_information();
	cout << "Высота спинки: " << height << endl;
}
int OfficeChairs::get_kam()const
{
	return height;
}
void OfficeChairs::set_kam(int kam)
{
	this->height = kam;
}
OfficeChairs& OfficeChairs::operator=(const OfficeChairs& comp)
{
	Chairs::operator=(comp);
	height = comp.height;
	return *this;
}
void OfficeChairs::write_file(string word)
{
	Chairs::write_file(word);
	ofstream file(word, ios::app);
	file << "Высота спинки: ";
	file << height << endl;
	file.close();
}
void OfficeChairs::read_file(ifstream& file)
{
	Chairs::read_file(file);
	file >> height;
}
void OfficeChairs::zapis()
{
	Chairs::zapis();
	cout << "Высота спинки: ";
	cin >> height;
}