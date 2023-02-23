#include "Fraction.h"
#include "Header.h"
//исполнитель класса фракций

void Fraction::talk()
{

}

void Fraction::corrupt()
{

}

void Fraction::setup(unsigned short int saveres, unsigned short int saverel, char savename)
{
	name = savename;
	resources = saveres;
	relation = saverel;
}

unsigned short int Fraction::setout()
{
	return name + resources + relation;
}
