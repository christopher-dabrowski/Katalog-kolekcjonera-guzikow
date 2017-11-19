#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Data.h"
#include "Guzik.h"
#include "Vector.h"
#include "Sortowanie.h"

#pragma warning(disable:4996)

int main()
{
    //char nazwa[20] = "Tomek";
    struct Guzik a = {"Tomek", 15, zlto, 20, {4,11,2017}, 2010}, b = { "Staszek", 2, drewno, 25,{ 4,11,2016 }, 2009 }
	, j = { "Jagodka", 20, srebro, 50.32,{ 19,3,1999 }, 2016 }, c = { "Bartek", 17, skora, 6.99,{ 30,2,2000 }, 2010 };
    struct Vector tab;
    zainicjalizuj(&tab);
	push_back(&tab, a);
	push_back(&tab, b);
	push_back(&tab, j);
	push_back(&tab, c);

	wypisz(&tab);

	sort(&tab, rozmiar, true);

	wypisz(&tab);

	sort(&tab, rozmiar, false);

	wypisz(&tab);
	

	
	cleanupAtExit(&tab);
	return 0;
}
