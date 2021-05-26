#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Chairs.h"

using namespace std;

Chairs::Chairs() : OfficeFurniture()
{
	height = 0;
}
Chairs::Chairs(const Chairs& temp) : OfficeFurniture(temp)
{
	height = temp.height;
}
void Chairs::print_information()
{
	OfficeFurniture::print_information();
	cout << "Высота: " << height << endl;
}
int Chairs::get_height()const
{
	return height;
}
void Chairs::set_height(int height)
{
	this->height = height;
}

Chairs& Chairs::operator=(const Chairs& comp)
{
	OfficeFurniture::operator=(comp);
	height = comp.height;
	return *this;
}
void Chairs::write_file(string word)
{
	OfficeFurniture::write_file(word);
	ofstream file(word, ios::app);
	file << "Высота: ";
	file << height << endl;
	file.close();
}
void Chairs::read_file(ifstream& file)
{
	OfficeFurniture::read_file(file);
	file >> height;
}
void Chairs::zapis()
{
	OfficeFurniture::zapis();
	cout << "Высота: ";
	cin >> height;
}