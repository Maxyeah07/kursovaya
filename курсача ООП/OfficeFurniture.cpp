#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include "OfficeFurniture.h"
using namespace std;

OfficeFurniture::OfficeFurniture()
{
	name = "";
	brand = "";
	color = "";
	price = 0;
}
OfficeFurniture::OfficeFurniture(const OfficeFurniture& temp)
{
	name = temp.name;
	brand = temp.brand;
	color = temp.color;
	price = temp.price;
}
void OfficeFurniture::print_information()
{
	cout << "��������: " << name << endl;
	cout << "�������������: " << brand << endl;
	cout << "����: " << color << endl;
	cout << "����: " << price << endl;
}
double OfficeFurniture::get_price() const
{
	return price;
}
string OfficeFurniture::get_name() const
{
	return name;
}
string OfficeFurniture::get_brand() const
{
	return brand;
}
void OfficeFurniture::set_price(double price)
{
	this->price = price;
}
void OfficeFurniture::set_name(string name)
{
	this->name = name;
}
void OfficeFurniture::set_brand(string brand)
{
	this->brand = brand;
}
string OfficeFurniture::get_color()const
{
	return color;
}
void OfficeFurniture::set_color(string color)
{
	this->color = color;
}
OfficeFurniture& OfficeFurniture::operator=(const OfficeFurniture& comp)
{
	price = comp.price;
	name = comp.name;
	brand = comp.brand;
	color = comp.color;
	return *this;
}
void OfficeFurniture::write_file(string word)
{
	ofstream file(word, ios::app);
	file << "��������: ";
	file << name << endl;
	file << "�������������: ";
	file << brand << endl;
	file << "����: ";
	file << price << endl;
	file << "����: ";
	file << color << endl;
	file.close();
}
void OfficeFurniture::read_file(ifstream& file)
{
	getline(file, name);
	getline(file, brand);
	getline(file, color);
	file >> price;
}
void OfficeFurniture::zapis()
{
	cout << "��������: ";
	cin >> name;
	cout << "�������������: ";
	cin >> brand;
	cout << "����: ";
	cin >> price;
	cout << "����: ";
	cin >> color;
}