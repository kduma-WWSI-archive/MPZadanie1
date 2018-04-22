#include "stdafx.h"
#include "Urzadzenie.h"


std::string Urzadzenie::daj_firme()
{
	return firma;
}

int Urzadzenie::daj_obroty()
{
	return obroty;
}

void Urzadzenie::pokaz_opis()
{
	std::cout << firma << obroty;
}
