#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Chairs.h"

using namespace std;

class Armchair : public Chairs
{
public:
	Armchair();
	Armchair(const Armchair& holod);
	void print_information()override;
	string get_material()const;
	void set_material(string material);
	Armchair& operator=(const Armchair& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	string material;
};