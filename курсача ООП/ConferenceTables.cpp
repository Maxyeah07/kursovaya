#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"ConferenceTables.h"

using namespace std;

ConferenceTables::ConferenceTables() :Tables()
{
	material = "";
}
ConferenceTables::ConferenceTables(const ConferenceTables& temp) :Tables(temp)
{
	material = temp.material;
}
void ConferenceTables::print_information()
{
	Tables::print_information();
	cout << "Материал: " << material << endl;
}
string ConferenceTables::get_material()const
{
	return material;
}
void ConferenceTables::set_material(string material)
{
	this->material = material;
}
ConferenceTables& ConferenceTables::operator=(const ConferenceTables& comp)
{
	Tables::operator=(comp);
	material = comp.material;
	return *this;
}
void ConferenceTables::write_file(string word)
{
	Tables::write_file(word);
	ofstream file(word, ios::app);
	file << "Материал: ";
	file << material << endl;
	file.close();
}
void ConferenceTables::read_file(ifstream& file)
{
	Tables::read_file(file);
	getline(file, material);
}
void ConferenceTables::zapis()
{
	Tables::zapis();
	cout << "Материал: ";
	cin >> material;
}