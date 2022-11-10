#pragma once
#include<cstdlib>
class Dado
{
public:
	Dado();
	Dado(char configuracion[6]);
	char roll();
private:
	char lado1,lado2,lado3,lado4,lado5,lado6;
};
inline Dado::Dado() {
	lado1 = 'A';
	lado2 = 'A';
	lado3 = 'A';
	lado4 = 'A';
	lado5 = 'A';
	lado6 = 'A';


}
inline Dado::Dado(char configuracion[6]) {
	lado1 = configuracion[0];
	lado2 = configuracion[1];
	lado3 = configuracion[2];
	lado4 = configuracion[3];
	lado5 = configuracion[4];
	lado6 = configuracion[5];

}
inline char Dado::roll() {
	int pos = rand() % 6 + 1;// PONER SRAND PARA QUE NO SELECCIONE EL MISMO CADA VEZ
	switch (pos) {
	case 1:
		return lado1;
		break;
	case 2:
		return lado2;
		break;
	case 3:
		return lado3;
		break;
	case 4: 
		return lado4;
		break;
	case 5:
		return lado5;
		break;
	case 6:
		return lado6;
		break;
	}

}