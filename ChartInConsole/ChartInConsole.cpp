// ChartInConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "box.h"
#include <stdio.h>

using namespace std;

int main()
{
					
	Box box1(80, 27);			// Dlugosc i wysokosc
	//box1.setLine();
	//box1.setPointHeight(5,'g');
								// Funkcja to  -(cos(4*i)*exp(-i)
	box1.setFunction(-0.5, 4);	// poczatek i koniec przedzialu wykresu
	

	box1.display();

	system("PAUSE");
	return 0;
}