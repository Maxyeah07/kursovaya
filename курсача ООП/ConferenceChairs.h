#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OfficeChairs.h"

using namespace std;

class ConferenceChairs :public OfficeChairs
{
public:
	ConferenceChairs();
	ConferenceChairs(const ConferenceChairs& temp);
	void print_information()override;
	string get_softness()const;
	void set_softness(string softness);
	ConferenceChairs& operator=(const ConferenceChairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	string softness;
};