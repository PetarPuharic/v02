#include <iostream>
#include <format>
#include "app.h"
std::string to_hex(int n) {
	return std::format("{:X}", n);
}

int main()
{
	/*
	Napišite program koji koriste?i tu klasu:
    - unese R/G/B komponentu boje
    - ispiše na konzolu RGB vrijednost boje (u heksadecimalnom zapisu, koristite funkciju sa prvih vježbi)
	*/

	std::cout << "Unesite RGB komponente boje (vrijednosti od 0 do 1):\n";
	double r, g, b;
	std::cout << "R: ";
	std::cin >> r;
	std::cout << "G: ";
	std::cin >> g;
	std::cout << "B: ";
	std::cin >> b;

	vsite::oop::v2::color c(r,g,b);


	std::cout << std::format("RGB vrijednost boje je: #{}\n", to_hex(c.get_color_ref()));
}
