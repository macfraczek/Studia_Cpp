// ProjectionPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <stdexcept>


template <class T1, class T2> class Odwzorow {
private:
	T1 p, q;
	T2 r, s;
public:
	Odwzorow(T1 pp, T1 qq, T2 rr, T2 ss) :p(pp), q(qq), r(rr), s(ss) {};

	T2 calculate(T1 arg) {
		if (arg<p || arg>q) throw std::runtime_error("Out of scope");
		T1 a;
		a = q - p;
		arg -= p;
		double wart = static_cast<double>(a / arg);
		T2 d;
		d = s - r;
		return static_cast<T2>(p + d / wart);
	}
};

int main()
{
	// odwzorowac punkt z przestrzeni AB na przestrzen CD

	// odwzorowanie oznacza przestrzen; w jakiej nastapi odwzorowanie
	// w danym przykladzie punkt 4 z przedzialu 0-5 bedzie szukany w przedziale 0-10
	// i dostaniemy jak sie mozna domyslic 8
	// gdy punkt bedzie poza zakresem AB wyrzucony zostanie wyjatek

	Odwzorow <double, double>alfa(0, 5, 0, 10);
	std::cout << "Wynik: " << alfa.calculate(4) << std::endl;

	system("PAUSE");
	return 0;
}