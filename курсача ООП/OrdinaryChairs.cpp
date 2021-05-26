#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OrdinaryChairs.h"

using namespace std;

OrdinaryChairs::OrdinaryChairs() :OfficeChairs()
{
	leg = 0;
}
OrdinaryChairs::OrdinaryChairs(const OrdinaryChairs& temp) :OfficeChairs(temp)
{
	leg = temp.leg;
}
void OrdinaryChairs::print_information()
{
	OfficeChairs::print_information();
	cout << "Количество ножек: " << leg << endl;
}
int OrdinaryChairs::get_leg()const
{
	return leg;
}
void OrdinaryChairs::set_leg(int leg)
{
	this->leg = leg;
}
OrdinaryChairs& OrdinaryChairs::operator=(const OrdinaryChairs& comp)
{
	OfficeChairs::operator=(comp);
	leg = comp.leg;
	return *this;
}
void OrdinaryChairs::write_file(string word)
{
	OfficeChairs::write_file(word);
	ofstream file(word, ios::app);
	file << "Количество ножек: ";
	file << leg << endl;
	file.close();
}
void OrdinaryChairs::read_file(ifstream& file)
{
	OfficeChairs::read_file(file);
	file >> leg;
}
void OrdinaryChairs::zapis()
{
	OfficeChairs::zapis();
	cout << "Количество ножек: ";
	cin >> leg;
}