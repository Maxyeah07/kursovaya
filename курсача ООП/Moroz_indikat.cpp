#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Moroz_indikat.h"

using namespace std;

Moroz_indikat::Moroz_indikat() :ConferenceTables()
{
	indikat = "";
}
Moroz_indikat::Moroz_indikat(const Moroz_indikat& holod) :ConferenceTables(holod)
{
	indikat = holod.indikat;
}
void Moroz_indikat::print_information()
{
	ConferenceTables::print_information();
	cout << "Наличие индикации температуры: " << indikat << endl;
}
string Moroz_indikat::get_indikat()const
{
	return indikat;
}
void Moroz_indikat::set_indikat(string indikat)
{
	this->indikat = indikat;
}
Moroz_indikat& Moroz_indikat::operator=(const Moroz_indikat& comp)
{
	ConferenceTables::operator=(comp);
	indikat = comp.indikat;
	return *this;
}
void Moroz_indikat::write_file(string word)
{
	Moroz_indikat::write_file(word);
	ofstream file(word, ios::app);
	file << "Наличие индикации температуры: ";
	file << indikat << endl;
	file.close();
}
void Moroz_indikat::read_file(ifstream& file)
{
	Moroz_indikat::read_file(file);
	getline(file, indikat);
}
void Moroz_indikat::zapis()
{
	ConferenceTables::zapis();
	cout << "Наличие индикации температуры: ";
	cin >> indikat;
}