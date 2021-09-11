// Ejemplo_Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int var = 50;

    cout << "Valor de var: " << var << "\n"; // 50
    cout << "Direccion de memoria de var: " << &var << "\n"; // direccion de var

    int* pointer = &var;
    cout << "Valor de pointer: " << pointer << "\n"; // direccion de memoria de var
    cout << "Direccion de memoria de pointer: " << &pointer << "\n"; // direccion de memoria de pointer
    cout << "Valor de *pointer: " << *pointer << "\n"; // 50 (valor de var)

    cout << "\n================================================================\n";
    cout << "                         *pointer = 25";
    cout << "\n================================================================\n";

    *pointer = 25;

    cout << "Valor de var: " << var << "\n"; // 25
    cout << "Direccion de memoria de var: " << &var << "\n"; // direccion de memoria de var (no va a cambiar)

    cout << "Valor de pointer: " << pointer << "\n"; // direccion de memoria de var
    cout << "Direccion de memoria de pointer: " << &pointer << "\n"; 
    cout << "Valor de *pointer: " << *pointer << "\n";

    cout << "\n================================================================\n";
    cout << "                          pointer = &var2";
    cout << "\n================================================================\n";

    int var2 = 75;
    pointer = &var2;

    cout << "Valor de var: " << var << "\n";
    cout << "Direccion de memoria de var: " << &var << "\n"; 

    cout << "Valor de var2: " << var2 << "\n"; 
    cout << "Direccion de memoria de var2: " << &var2 << "\n"; 

    cout << "Valor de pointer: " << pointer << "\n"; 
    cout << "Direccion de memoria de pointer: " << &pointer << "\n";
    cout << "Valor de *pointer: " << *pointer << "\n";

    cout << "\n================================================================\n";
    cout << "                          pointer = new int";
    cout << "\n================================================================\n";

    pointer = new int;

    cout << "Valor de var: " << var << "\n";
    cout << "Direccion de memoria de var: " << &var << "\n";

    cout << "Valor de var2: " << var2 << "\n";
    cout << "Direccion de memoria de var2: " << &var2 << "\n";

    cout << "Valor de pointer: " << pointer << "\n";
    cout << "Direccion de memoria de pointer: " << &pointer << "\n";
    cout << "Valor de *pointer: " << *pointer << "\n";

    cout << "\n================================================================\n";
    cout << "                          pointer = nullptr";
    cout << "\n================================================================\n";

    //pointer = nullptr;
    cout << pointer << "\n";

    double* dpointer = new double;
    cout << sizeof dpointer << "\n";
    cout << sizeof *dpointer << "\n";

    cout << sizeof pointer << "\n";
    cout << sizeof * pointer << "\n";

}