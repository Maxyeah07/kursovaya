#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "fstream"
#include <Windows.h>
#include"IOfficeFurniture.h"
using namespace std;

class OfficeFurniture : public IOfficeFurniture {
public:
	OfficeFurniture();
	OfficeFurniture(const OfficeFurniture& temp);
	void print_information() override;
	double get_price() const override;
	string get_name() const override;
	string get_brand() const override;
	void set_price(double price) override;
	void set_name(string name) override;
	void set_brand(string brand) override;
	string get_color()const;
	void set_color(string color);
	OfficeFurniture& operator=(const OfficeFurniture& comp);
	void write_file(string word)override;
	void read_file(ifstream& file)override;
	void zapis()override;
protected:
	string name;
	string brand;
	string color;
	double price;
};