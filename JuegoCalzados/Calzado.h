#pragma once
class Calzado
{

	//definicion de la clase
	//declaracion de atributos
private:
	char ladoPie;
	short talla;


	//declarion de las firmas de las funciones
public:
	Calzado();
	Calzado(char l, short t);
	Calzado(short t);
	bool esParDe(Calzado c);
	void setTalla(short t);
	short getTalla();
	void imprimir();
};

