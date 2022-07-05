
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool c=1;
    srand(time(NULL));
    int** tab = new int * [10];
    int** tab1 = new int * [10];

    for (int i = 0; i < 10; i++) {
        tab[i] = new int[10];
        tab1[i] = new int[10];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tab[i][j] = 0;
            tab1[i][j] = 0;
        }
    }
    cout << "podaj wspolrzedne swoich czterech statkow jednozaglowych"<<endl;
    for (int i = 0; i <= 3; i++) {
        int x, y;
        cout << "x=" ;
        cin >> x;
        while ( x > 10 || cin.good() == false) {
            cout << "wyszedles poza plansze\n Zakres planszy od 1 do 10" << endl;
            cin.ignore(9999, '\n');
            cin >> x;
        }
        cout << "y=";
        cin >> y;
        while ( y > 10 || cin.good() == false) {
            cout << "wyszedles poza plansze\n Zakres planszy od 1 do '0" << endl;
            cin.ignore(9999, '\n');
            cin >> y;
        }
        tab[x-1][y-1] = 1;
    }
    for (int i = 0; i < 3; i++) {
        int x, y;
        x=rand()%10;
        y=rand()%10;
        tab1[x][y] = 1;
    }
    int z=0, p=0;
    while (c) {
        int x, y;
        cout << "Podaj wspolrzedne do strzalu\n";
        cout << "x=";
        cin >> x;
        cout << "y=";
        cin >> y;
        while (x > 10 || y > 10 ||cin.good() == false) {
            cout << "wyszedles poza plansze\n Zakres planszy od 0 do 9" << endl;
            cout << "x=";            
            cin.ignore(9999, '\n');
            cin >> x;
            cout << "y=";
            cin >> y;
        }
        if (tab1[x-1][y-1]==1) {
            cout << "Zatopiles statek" << endl;
            tab1[x-1][y-1] = 0;
            p++;
        }
        else if(tab1[x][y] == 0){
            cout << "Pudlo" << endl;
        }
        x = rand() % 10;
        y = rand() % 10;
        if (tab[x][y] == 1) {
            cout << "Przeciwnik zatopil twoj statek" << endl;
            tab[x][y] = 0;
            z++;
        }
        if (z == 4) {
            cout << "Przegrales!" << endl;
            break;
        }
        if (p == 4) {
            cout << "Wygrales!" << endl;
            break;
        }
        
    }


    for (int i = 0; i < 10; i++) {
        delete[] tab[i];        
        delete[] tab1[i];      
    }
    delete[] tab;
    delete[] tab1;
    cout << "Koniec gry!\n";
    return 0;
}

