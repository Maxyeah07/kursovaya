#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Armchair.h"

using namespace std;

Armchair::Armchair() : Chairs()
{
	material = "";
}
Armchair::Armchair(const Armchair& temp) :Chairs(temp)
{
	material = temp.material;
}
void Armchair::print_information()
{
	Chairs::print_information();
	cout << "Материал: " << material << endl;
}
string Armchair::get_material()const
{
	return material;
}
void Armchair::set_material(string material)
{
	this->material = material;
}
Armchair& Armchair::operator=(const Armchair& comp)
{
	Chairs::operator=(comp);
	material = comp.material;
	return *this;
}
void Armchair::write_file(string word)
{
	Chairs::write_file(word);
	ofstream file(word, ios::app);
	file << "Материал: ";
	file << material << endl;
	file.close();
}
void Armchair::read_file(ifstream& file)
{
	Chairs::read_file(file);
	getline(file, material);
}
void Armchair::zapis()
{
	Chairs::zapis();
	cout << "Материал: ";
	cin >> material;
}