

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int w = 0;
    cout << "1 -dodawanie\n2 -odjemowanie\n3 -dzielenie\n4 -mnozenie\n5 -pierwiastek kwadratowy z liczby\n6 -procent z liczby\n7 -reszta z dzielenia\n8 -potega\n9 -menu\n10 -zakoncz\n"<<endl;
    cout << "Dzialania wygladaja w sposob a*b, a^b itd, gdzie pierwsza wprowadzona liczba to 'a' a druga to 'b'" << endl;
    while (w != 1){
    int x;
    cin >> x;
    while (x>11||x<1|| cin.good() == false) {
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Podaj liczbe od 1 do 11" << endl;
        cin >> x;
       
    }
    if (x == 1) {
        cout << "Podaj dwie liczby"<<endl;
        int a, b;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        cout << a + b;
    }
    if (x == 2) {
        cout << "Podaj dwie liczby" << endl;
        int a, b;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
            while (cin.good() == false) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "blad wejscia" << endl;
                cin >> b;
            }
        cout << a - b;
    }
    if (x == 3) {
        cout << "Podaj dwie liczby" << endl;
        int a, b;
        cin >> a ;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        cout << a / b;
    }
    if (x == 4) {
        cout << "Podaj dwie liczby" << endl;
        int a, b;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        cout << a * b;
    }
    if (x == 5) {
        cout << "Podaj liczbe" << endl;
        int a;
        cin >> a;
        while (cin.good() == false) {
              cin.clear();
              cin.ignore(999999, '\n');
              cout << "blad wejscia" << endl;
              cin >> a;
        }
        cout << sqrt(a);
    }
    if (x == 6) {
        cout << "Podaj liczbę i procent" << endl;
        float a, b;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        cout << a * (b/100);
    }
    if (x == 7) {
        cout << "Podaj dwie liczby" << endl;
        int a, b;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        cout << a % b;
    }
    if (x == 8) {
        cout << "Podaj dwie liczby" << endl;
        int a, b, c = 1;
        cin >> a;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> a;
        }
        cin >> b;
        while (cin.good() == false) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "blad wejscia" << endl;
            cin >> b;
        }
        for (int i = 1; i >= b; i++) {
            c = a * a;
        }
        cout << c;
    }
    if (x == 9) {
        cout << "1 -dodawanie\n2 -odjemowanie\n3 -dzielenie\n4 -mnozenie\n5 -pierwiastek kwadratowy z liczby\n6 -procent z liczby\n7 -reszta z dzielenia\n8 -potega\n9 -menu\n10 -zakoncz\n";

    }
    if (x == 10) {
        w++;
    }
    }
}

