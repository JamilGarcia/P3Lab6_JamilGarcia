#include <iostream>
#include <string>
using namespace std;
class CHAR
{
    friend class STRING;
    char caracter;
    STRING cadena; 

public:
    /*
    CHAR(char c)
    {
        caracter = c;
    }
    */

    STRING operator+(CHAR c)
    {
        caracter = c.getValue();
        string s;
        s.push_back(caracter);
        string texto;
        texto += caracter;
        texto = texto + c.getValue();

        STRING salida = texto;
        return cadena;
    }

/*
    void setValue(string cade)
    {
        cadena = cade.getValue();
    }
    */
    void operator!()
    {
        cout << caracter;
    }

    char getValue()
    {
        return caracter;
    }

    void operator<<(CHAR charac)
    {
        caracter = charac.getValue();
    }

    void operator<<(char charac)
    {
        caracter = charac;
    }
};
