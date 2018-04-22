// MPZadanie1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SzlifierkaKatowa.h"
#include "WiertarkoWkretarka.h"


int main()
{
	SzlifierkaKatowa sk[4] = { 
		SzlifierkaKatowa("bzdet",100,123,2500),
		SzlifierkaKatowa("bzdet1",200,123,3500),
		SzlifierkaKatowa("bzdet2",300,123,7500),
		SzlifierkaKatowa("bzdet3",400,123,9500)
	};

	WiertarkoWkretarka ww[4] = {
		WiertarkoWkretarka("bzdet",100,123.00,"2500",60),
		WiertarkoWkretarka("bzdet1",200,123.00,"3500",30),
		WiertarkoWkretarka("bzdet2",300,123.00,"7500",1),
		WiertarkoWkretarka("bzdet3",400,123.00,"9500",500)
	};

	// Wyświetlić dane o ww z baterią o najkrótszym czasie ładowania.

	// 1. Utworzyć zmienne tymczasowe na numer ww o najszybszym 
	//    ładowaniu oraz zmienną z aktualne najniższym czasem ladowania.

	// 2. Przejść przez tablicę sprawdzając czy aktualna WW ma szybsze 
	//    ładowanie od tej zapisanej w zmiennych tymczasowych - jeśli
	//    jest szybsza to aktualizujemy zmienne tymczasowe.

	// 3. Po zakończeniu pętli, za pomocą pokaz_opis() wyświetlamy ww 
	//    którą wyłuskaliśmy w punkcie 2.

    return 0;
}

