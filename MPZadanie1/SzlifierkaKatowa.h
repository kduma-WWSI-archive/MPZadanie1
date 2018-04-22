#pragma once
#include "Urzadzenie.h"
#include <string>
#include <iostream>

class SzlifierkaKatowa : public Urzadzenie
{
private:
	int tarcza;
	int moc;

public:
	SzlifierkaKatowa(std::string firma, int obroty, int tarcza, int moc) : Urzadzenie(firma, obroty), tarcza(tarcza), moc(moc) {}
	int daj_moc();
	int daj_tarcze();
	void pokaz_opis();
};

