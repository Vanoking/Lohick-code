#pragma once
//хидер класса фракций

class Fraction
{
private:
	 char name;
	 unsigned short int resources;
	 unsigned short int relation;
public:
	void talk();
	void corrupt();
	void setup(unsigned short int saveres, unsigned short int saverel, char savename);
	unsigned short int setout();
};

