#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Tables.h"

using namespace std;

class Desk :public Tables
{
public:
	Desk();
	Desk(const Desk& holod);
	void print_information()override;
	int get_count()const;
	void set_count(int count);
	Desk& operator=(const Desk& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	int count;
};