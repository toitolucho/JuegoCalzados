// JuegoCalzados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calzado.h";
#include "ManejadorCalzado.h";
using namespace std;

int sumar(int a, int b)
{
    a++;
    b++;
    return a + b;
}

void aumetarTalla(Calzado *c1)
{
    short t = c1->getTalla();
    t++;
    c1->setTalla(t);
    //cout << "Impresion desde funcion aumentar talla ";
    c1->imprimir();
}
int main()
{
    //Calzado c1;
    //un puntero es un referencia a sector de la memoria de un determinado tipo de dato
    int x = 10;
    int y = 20;
    int z = sumar(x, y);
    int f = sumar(x + 1, y + 1);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    /* int* pi = nullptr;
     std::cout << a << std::endl;
     std::cout << pi << std::endl;
     pi = &a;
     std::cout << pi << std::endl;
     *pi = 15;
     std::cout << a << std::endl;*/

    Calzado c1, c2, c3('I', 38);
    Calzado* pc = nullptr;
    
    //pc = &c1;
    //pc->imprimir();
    //aumetarTalla(pc);
    //pc->imprimir();

    ////crear una instancia a partir de un puntero
    pc = new Calzado();
    pc->imprimir();


    /*c1.imprimir();
    aumetarTalla(c1);
    c1.imprimir();*/
    

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
