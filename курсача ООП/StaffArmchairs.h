#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Armchair.h"
using namespace std;

class StaffArmchairs :public Armchair
{
public:
	StaffArmchairs();
	StaffArmchairs(const StaffArmchairs& temp);
	void print_information()override;
	string get_kickbacks()const;
	void set_kickbacks(string kickbacks);
	StaffArmchairs& operator=(const StaffArmchairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	string kickbacks;
};