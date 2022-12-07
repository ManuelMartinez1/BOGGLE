#pragma once
#include<cstdlib>
#include <string>
class Dado{
public:
	Dado();
	Dado(std::string configuracion);
	std::string roll();
private:
	std::string dado;
};

inline Dado::Dado() {
	dado = "AAAAAA";
}
inline Dado::Dado(std::string configuracion) {
	if (configuracion.size() >= 5)
		this->dado = configuracion;
}
inline std::string Dado::roll() {
	int pos = rand() % 6;// PONER SRAND PARA QUE NO SELECCIONE EL MISMO CADA VEZ
	std::string str;
	str += dado[pos];
	return str;
}