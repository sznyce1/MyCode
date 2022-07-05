
#include <iostream>
#include <cstring>

using namespace std;



int main()
{
    
    string t = "Jesli przed uzyciem funkcji getline uzyjemy obiektu cin, ten ostatni pozostawia zwykle znak konca wiersza \\n w buforze klawiatury.";
    string z = "buforze";
    string p = "lesie";
   
    t.find(z);
    t.replace(t.find(z), z.length(), p);      
    cout << t;
       
    return 0;
}

