#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"OfficeChairs.h"

using namespace std;

class OrdinaryChairs : public OfficeChairs
{
public:
	OrdinaryChairs();
	OrdinaryChairs(const OrdinaryChairs& temp);
	void print_information()override;
	int get_leg()const;
	void set_leg(int leg);
	OrdinaryChairs& operator=(const OrdinaryChairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	int leg;
};