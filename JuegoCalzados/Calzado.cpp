#include "Calzado.h"
#include <iostream>
using namespace std;


Calzado::Calzado()
{
	ladoPie = 'D';
	talla = 40;
}
Calzado::Calzado(char l, short t)
{
	ladoPie = l;
	talla = t;
}
Calzado::Calzado(short t)
{
	talla = t;
	ladoPie = 'D';	
}
bool Calzado::esParDe(Calzado c)
{
	return talla = c.talla && ladoPie != c.ladoPie;
}
void Calzado::setTalla(short t)
{
	talla = t;
}
short Calzado::getTalla()
{
	return talla;
}

void Calzado::imprimir()
{
	std::cout << "talla : " << talla << ",  Lado Pie :" << ladoPie << std:: endl;
}
