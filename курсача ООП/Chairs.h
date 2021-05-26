#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OfficeFurniture.h"
using namespace std;

class Chairs :public OfficeFurniture
{
public:
	Chairs();
	Chairs(const Chairs& temp);
	void print_information()override;
	int get_height()const;
	void set_height(int height);
	Chairs& operator=(const Chairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	int height;
};