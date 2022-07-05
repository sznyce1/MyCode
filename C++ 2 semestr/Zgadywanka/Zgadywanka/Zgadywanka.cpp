
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int l = rand() % 100 + 1;
    int d = rand() % 100 + 1;
    int i;
    int* tab = new int[l];

    tab[l] = d;
    
    cout << "Zgadnij dwie liczby od 1 do 100 \n podaj poziom trudnosci\n t=trudny e=latwy" << endl;
    char p;
    cin >> p;
    while (cin.good() == false && (p !='t' || p !='e')) {
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "blad wejscia" << endl;
        cin >> p;
    }
    if(p=='t'){
    i=5;
    cout << "Masz 5 zyc" << endl;
    }else

    if (p == 'e') {
    i =25;
    cout << "Masz 25 zyc" << endl;
    }
    
    while (i!=0) {
        int z=0;
        cin >> z;
        while (cin.good() == false && (z < 0 || z > 100)) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> z;
        }
        if (l > z) {
            cout << "za mala liczba" << endl;
        }else
        if (l < z) {
                cout << "za duza liczba" << endl;
        }else
        if (z == l) {
            cout << "1 liczba zostala odgadnienta" << endl;
            while (i != 0) {
                cin >> z;
                while (cin.good() == false && (z < 0 || z > 100)) {
                    cin.clear();
                    cin.ignore(999999, '\n');
                    cout << "blad wejscia" << endl;
                    cin >> z;
                }
                if (tab[l] > z) {
                    cout << "za mała liczba" << endl;
                }
                else
                if (tab[l] < z) {
                    cout << "za duza liczba" << endl;
                }
                else
                if (z == tab[l]) {
                    cout << "wygrales" << endl;
                    break;
                }
                i--;
                if (i == 0) {
                    cout << "skonczyly ci sie proby" << endl;
                    break;
                }
            }
            
        }
        i--;
        if (i == 0) {
            cout << "skonczyly ci sie proby" << endl;
            break;
        }
    }
    delete[] tab;
    return 0;
}

