#include <iostream>
#include <string>
using namespace std;
class INTEGER
{
    int entero;

public:
    void operator!()
    {
        cout << caracter;
    }
    
};

istream &operator<<(istream &i, INTEGER &n)
{
    i >> n.entero;
    return i;
}