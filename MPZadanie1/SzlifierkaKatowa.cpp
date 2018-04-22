#include "stdafx.h"
#include "SzlifierkaKatowa.h"

int SzlifierkaKatowa::daj_moc()
{
	return moc;
}

int SzlifierkaKatowa::daj_tarcze()
{
	return tarcza;
}

void SzlifierkaKatowa::pokaz_opis()
{
	std::cout << firma << obroty << tarcza << moc;
}
