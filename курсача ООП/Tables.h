#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OfficeFurniture.h"
using namespace std;

class Tables :public OfficeFurniture
{
public:
	Tables();
	Tables(const Tables& holod);
	void print_information()override;
	double get_length()const;
	void set_length(double v);
	Tables& operator=(const Tables& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	double length;
};