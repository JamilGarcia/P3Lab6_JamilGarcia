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
    
     
    int getValue(){
        return entero; 
    }
    
    void operator<<(INTEGER ent)
    {
        entero = ent.getValue(); 
    }

    void operator<<(string ent){
        entero = ent; 
    }
};
