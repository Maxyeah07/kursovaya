#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Chairs.h"
using namespace std;

class OfficeChairs : public Chairs
{
public:
	OfficeChairs();
	OfficeChairs(const OfficeChairs& holod);
	void print_information()override;
	int get_kam()const;
	void set_kam(int kam);
	OfficeChairs& operator=(const OfficeChairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	int height;
};