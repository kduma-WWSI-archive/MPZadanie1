#pragma once
#include <string>
#include <iostream>

class Urzadzenie
{
protected:
	std::string firma;
	int obroty;

public:
	Urzadzenie(std::string firma, int obroty) : firma(firma), obroty(obroty) {}
	std::string daj_firme();
	int daj_obroty();
	void pokaz_opis();
};

