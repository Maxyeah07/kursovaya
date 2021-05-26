#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"StaffArmchairs.h"

using namespace std;

StaffArmchairs::StaffArmchairs() :Armchair()
{
	kickbacks = "";
}
StaffArmchairs::StaffArmchairs(const StaffArmchairs& temp) :Armchair(temp)
{
	kickbacks = temp.kickbacks;
}
void StaffArmchairs::print_information()
{
	Armchair::print_information();
	cout << "Тип откидывания: " << kickbacks << endl;
}
string StaffArmchairs::get_kickbacks()const
{
	return kickbacks;
}
void StaffArmchairs::set_kickbacks(string kickbacks)
{
	this->kickbacks = kickbacks;
}
StaffArmchairs& StaffArmchairs::operator=(const StaffArmchairs& comp)
{
	Armchair::operator=(comp);
	kickbacks = comp.kickbacks;
	return *this;
}
void StaffArmchairs::write_file(string word)
{
	Armchair::write_file(word);
	ofstream file(word, ios::app);
	file << "Тип откидывания: ";
	file << kickbacks << endl;
	file.close();
}
void StaffArmchairs::read_file(ifstream& file)
{
	Armchair::read_file(file);
	getline(file, kickbacks);
}
void StaffArmchairs::zapis()
{
	Armchair::zapis();
	cout << "Тип откидывания: ";
	cin >> kickbacks;
}