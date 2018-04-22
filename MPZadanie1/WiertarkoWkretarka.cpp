#include "stdafx.h"
#include "WiertarkoWkretarka.h"


double WiertarkoWkretarka::daj_napiecie()
{
	return napiecie;
}

std::string WiertarkoWkretarka::daj_baterie()
{
	return bateria;
}

int WiertarkoWkretarka::daj_czas_ladowania()
{
	return czas_ladowania;
}

void WiertarkoWkretarka::pokaz_opis()
{
	std::cout << firma << obroty << napiecie << bateria << czas_ladowania;
}
