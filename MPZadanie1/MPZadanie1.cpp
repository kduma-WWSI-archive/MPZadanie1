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

    return 0;
}

