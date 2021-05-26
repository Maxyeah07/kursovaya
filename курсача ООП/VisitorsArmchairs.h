#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"Armchair.h"

using namespace std;

class VisitorsArmchairs :public Armchair
{
public:
	VisitorsArmchairs();
	VisitorsArmchairs(const VisitorsArmchairs& holod);
	void print_information()override;
	int get_kam()const;
	void set_kam(int kam);
	VisitorsArmchairs& operator=(const VisitorsArmchairs& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	int kam;
};