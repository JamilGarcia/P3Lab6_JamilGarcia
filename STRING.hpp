#include <iostream>
#include <string>
using namespace std;

class STRING
{
    
    string cadena;

public:
    /*
    STRING (string cand){
        cadena = cand
    }
    */

    void operator!()
    {
        cout << cadena;
    }

    string operator*(int repetir)
    {
        string temp_cadena;
        for (int i = 0; i < repetir; i++)
        {
            temp_cadena = temp_cadena + cadena;
        }
        return temp_cadena;
    }

    
    string getValue(){
        return cadena; 
    }
    
    void operator<<(STRING cade)
    {
        cadena = cade.getValue(); 
    }

    void operator<<(string cade){
        cadena = cade; 
    }
};
