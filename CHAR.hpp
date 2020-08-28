#include <iostream>
#include <string>
using namespace std;
class CHAR
{
    friend class STRING;
    char caracter;

public:
    /*
    CHAR(char c)
    {
        caracter = c;
    }
    */

    STRING operator+(CHAR c)
    {
        string texto;
        texto += caracter;
        texto += c;
        return texto;
    }
    void operator!()
    {
        cout << caracter;
    }
    istream operator<<(istream &i, CHAR &n)
    {
        i >> n.caracter;
        return i;
    }
};
