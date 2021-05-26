#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Tables.h"

using namespace std;

class ConferenceTables :public Tables
{
public:
	ConferenceTables();
	ConferenceTables(const ConferenceTables& holod);
	void print_information()override;
	string get_material()const;
	void set_material(string material);
	ConferenceTables& operator=(const ConferenceTables& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	string material;
};