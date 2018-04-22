#pragma once

#include <string>
#include "Urzadzenie.h"
class WiertarkoWkretarka : public Urzadzenie
{
private:
	double napiecie;
	std::string bateria;
	int czas_ladowania;

public:
	WiertarkoWkretarka(const std::string &firma, int obroty, double napiecie, const std::string &bateria,
		int czas_ladowania) : Urzadzenie(firma, obroty), napiecie(napiecie), bateria(bateria),
		czas_ladowania(czas_ladowania) {}
	double daj_napiecie();
	std::string daj_baterie();
	int daj_czas_ladowania();
	void pokaz_opis();
};

