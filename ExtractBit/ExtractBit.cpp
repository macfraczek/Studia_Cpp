// ExtractBit.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

template < typename T >
string returnBit(T &wartosc)
{

	int counter = sizeof(T);
	char* pointr = reinterpret_cast <char*>(&wartosc);
	pointr = pointr - 1 + counter;
	string bufor;

	while (counter--) {
		for (int j = 128; j>0; j >>= 1)
			if (static_cast<bool>(*pointr & j))
				bufor += "1";
			else
				bufor += "0";
		bufor += " ";
		pointr--;
	}
	return bufor;
}

int main()
{
	// przyklad pokazujacy jak poszczegolne typy danych są przechowywane w pamięci. Długośc i zawartość bitów.
	bool bu = true;
	char chMy = 'a';  // 97 = 64 + 32 +1  =(10>2)=>  0110 0001
	short shortMy = 123;
	int liczba = -1;
	unsigned int liczba2 = -1;
	long longMy = 123;
	long long long2My = 123;
	float flMy = 3.14;
	double doMy = 3.14;
	long double  dolMy = 3.14;
	cout << "ZNAK (bool) \"" << bu << "\" to binarnie: \t\t\t" << returnBit(bu) << endl;
	cout << "ZNAK (char) \"" << chMy << "\" to binarnie: \t\t\t" << returnBit(chMy) << endl;
	cout << "ZNAK (short) \"" << shortMy << "\" to binarnie: \t\t" << returnBit(shortMy) << endl;
	cout << "ZNAK (sign int) \"" << liczba << "\" to binarnie: \t\t" << returnBit(liczba) << endl;
	cout << "ZNAK (unsign int) \"" << liczba2 << "\" to binarnie: \t" << returnBit(liczba2) << endl;
	cout << "ZNAK (long) \"" << longMy << "\" to binarnie: \t\t\t" << returnBit(longMy) << endl;
	cout << "ZNAK (long long) \"" << long2My << "\" to binarnie: \t\t" << returnBit(long2My) << endl;
	cout << "ZNAK (float) \"" << flMy << "\" to binarnie: \t\t" << returnBit(flMy) << endl;
	cout << "ZNAK (double) \"" << doMy << "\" to binarnie: \t\t" << returnBit(doMy) << endl;
	cout << "ZNAK (long double) \"" << dolMy << "\" to binarnie: \t\t" << returnBit(dolMy) << endl;

	// -------------------------------------------------------------------------------------------------------

	/*  // przyklad gdzie pokazano przepelnienie sie char & notacje U2
	char przyklad = -1;
	cout << "Liczba " << (int)przyklad << " to binarnie " << returnBit(przyklad) << endl;
	przyklad++;
	for (; przyklad != -1; przyklad++)
	cout << "Liczba " << (int)przyklad << " to binarnie " << returnBit(przyklad) << endl;
	*/

	// -------------------------------------------------------------------------------------------------------

	system("PAUSE");
	return 0;
}