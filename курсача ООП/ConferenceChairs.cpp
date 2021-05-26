#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"ConferenceChairs.h"

using namespace std;

ConferenceChairs::ConferenceChairs() :OfficeChairs()
{
	softness = "";
}
ConferenceChairs::ConferenceChairs(const ConferenceChairs& temp) :OfficeChairs(temp)
{
	softness = temp.softness;
}
void ConferenceChairs::print_information()
{
	OfficeChairs::print_information();
	cout << "ћ€гкость: " << softness << endl;
}
string ConferenceChairs::get_softness()const
{
	return softness;
}
void ConferenceChairs::set_softness(string softness)
{
	this->softness = softness;
}
ConferenceChairs& ConferenceChairs::operator=(const ConferenceChairs& comp)
{
	OfficeChairs::operator=(comp);
	softness = comp.softness;
	return *this;
}
void ConferenceChairs::write_file(string word)
{
	OfficeChairs::write_file(word);
	ofstream file(word, ios::app);
	file << "ћ€гкость: ";
	file << softness << endl;
	file.close();
}
void ConferenceChairs::read_file(ifstream& file)
{
	OfficeChairs::read_file(file);
	getline(file, softness);
}
void ConferenceChairs::zapis()
{
	OfficeChairs::zapis();
	cout << "ћ€гкость: ";
	cin >> softness;
}